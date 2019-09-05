#include <usb.h>

using namespace std;
static int sleep = 2;

[[noreturn]] void get_usb_devices(Ui::MainWindow *ui, vector<string> *devices) {
  bool startup = true;
  for (;;) {
    // clear the device list
    devices->clear();

    // get all usb devices
    string output = exec("lsusb");
    string line;
    bool change = false;
    istringstream device_stream(output);

    // loop through output line by line

    while (getline(device_stream, line)) {
      bool found = false;
      // remove stuff from output we dont want
      string device = line.substr(23, line.length() - 23);
      // add device to the list
      devices->push_back(device);
      // check if we should consider displaying the device
      if (!is_blacklisted(device) && contains_search(ui, device)) {
        // loop thorugh all currently displayed devices and check if we need to
        // add the current one
        for (int i = 0; i < ui->usb_devices->count(); i++) {

          if (ui->usb_devices->item(i)->text().toUtf8().constData() == device) {
            found = true;
            break;
          }
        }
        if (!found) {
          QString qdevice = QString::fromStdString(device);
          ui->usb_devices->insertItem(0, qdevice);
          change = true;
        }
      }
    }
    // again loop thorugh all currently displayed devices and check which
    // devices are no longer aviable and should be removed
    for (int i = 0; i < ui->usb_devices->count(); i++) {
      bool found = false;
      for (unsigned int j = 0; j < devices->size(); j++) {
        if (ui->usb_devices->item(i)->text().toUtf8().constData() ==
            (*devices)[j]) {
          found = true;
          break;
        }
      }
      if (!found) {
        ui->usb_devices->removeItemWidget(ui->usb_devices->takeItem(i));
        change = true;
      }
    }

    // visual effect if the device list has changed
    if (change && !startup) {
      QPalette pal = ui->usb_devices->palette();
      auto color1 = pal.color(QPalette::Background);
      auto color2 = pal.color(QPalette::Highlight);
      pal.setColor(QPalette::Highlight, Qt::green);
      pal.setColor(QPalette::Background, Qt::green);
      ui->centralWidget->setPalette(pal);

      pal.setColor(QPalette::Background, color1);
      pal.setColor(QPalette::Highlight, color2);
      this_thread::sleep_for(chrono::milliseconds(500));
      ui->centralWidget->setPalette(pal);
    }
    // repeat after n seconds
    startup = false;
    this_thread::sleep_for(chrono::seconds(sleep));
  }
}

void connector(Ui::MainWindow *ui, string device, config *c) {

  // get the selected device
  string vm_ID = "";
  if (ui->vm_ids->currentRow() >= 0) {
    vm_ID =
        ui->vm_ids->item(ui->vm_ids->currentRow())->text().toUtf8().constData();
  }
  string vendor_id = device.substr(0, 4);
  string device_id = device.substr(5, 4);
  string q = "";
  if (c->quotes == "true") {
    q = "\"";
  }
  string uname = getenv("USER");
  string file = "/tmp/" + uname + "-libvirt_usb_gui.xml";

  string xml = "\"<hostdev mode='subsystem' type='usb' managed='yes'> <source> "
               "<vendor id='0x" +
               vendor_id + "' /> <product id='0x" + device_id +
               "'  /> </source> </hostdev>\"";
  string cmd = "echo " + xml + " > " + file + " && " + c->sudo + " " + q +
               "virsh attach-device " + vm_ID + " --file " + file + q;
  // execute command
  string response = exec(cmd);
  // if its already in use we try to detach it
  if (response.find("in use by driver QEMU") != string::npos) {
    response = exec(c->sudo + " " + q + "virsh detach-device " + vm_ID +
                    " --file " + file + q);
  }
  istringstream response_stream(response);
  string line;

  while (getline(response_stream, line)) {
    if (!line.empty()) {
      ui->log->append(QString::fromStdString(line));
    }
  }
}
