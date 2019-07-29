#include <config.h>
#include <mainwindow.h>
#include <usb.h>
using namespace std;
static vector<string> devices;
static config *c;
const string conf_name = "libvirt_usb_gui.conf";
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {

  ui->setupUi(this);
  std::thread(get_usb_devices, ui, &devices).detach();

  // setup and read the config file
  string home = getenv("HOME");
  string conf_file = home.append("/." + conf_name);

  c = new config(conf_file);

  vector<string> vm_ids = c->vm_ids;
  vector<string> blacklist = c->blacklist;
  for (unsigned int i = 0; i < blacklist.size(); i++) {
    ui->blacklist->addItem(QString::fromStdString(blacklist[i]));
  }

  for (unsigned int i = 0; i < vm_ids.size(); i++) {
    ui->vm_ids->addItem(QString::fromStdString(vm_ids[i]));
  }
  if (c->quotes == "true") {
    ui->button_quotes->setChecked(true);
  }

  ui->sudo_command->setText(QString::fromStdString(c->sudo));
  ui->log->append("config loaded");
  ui->tabWidget->setCurrentIndex(0);
  ui->vm_ids->setCurrentRow(0);
}

MainWindow::~MainWindow() { delete ui; }

void MainWindow::on_usb_devices_itemDoubleClicked(QListWidgetItem *item) {
  // connect device on double click
  QString qdevice = item->text();
  string device = qdevice.toUtf8().constData();
  connector(ui, device, c);
}

void MainWindow::on_search_bar_textChanged(const QString &arg1) {
  (void)arg1;
  vector<string> results;
  ui->usb_devices->clear();
  // check which devices contain the search string and display them
  for (unsigned int i = 0; i < devices.size(); i++) {
    if (!is_blacklisted(devices[i]) && contains_search(ui, devices[i])) {
      ui->usb_devices->addItem(QString::fromStdString(devices[i]));
    }
  }
}

string exec(string cmd) {
  cmd = cmd + " 2>&1";
  const char *command = cmd.c_str();
  array<char, 128> buffer;
  string result;
  unique_ptr<FILE, decltype(&pclose)> pipe(popen(command, "r"), pclose);
  if (!pipe) {
    throw runtime_error("popen() failed!");
  }
  while (fgets(buffer.data(), buffer.size(), pipe.get()) != nullptr) {
    result += buffer.data();
  }

  return result;
}

bool contains_search(Ui::MainWindow *ui, string ds) {
  string search = ui->search_bar->text().toUtf8().constData();
  // ignore case
  transform(search.begin(), search.end(), search.begin(), ::tolower);
  transform(ds.begin(), ds.end(), ds.begin(), ::tolower);

  if (ds.find(search) != string::npos) {
    return true;
  } else {
    return false;
  }
}

bool is_blacklisted(string device) {
  bool b = false;
  // check if a device is on the blacklist
  for (unsigned int i = 0; i < c->blacklist.size(); i++) {
    if (device == c->blacklist[i]) {
      b = true;
      break;
    }
  }
  return b;
}
void MainWindow::keyPressEvent(QKeyEvent *event) {

  if (event->key() == Qt::Key_Delete) {
    event->accept();
    remove_id();
  }
}

void MainWindow::on_add_vm_id_clicked() { add_id(); }

void MainWindow::on_delete_button_clicked() { remove_id(); }

void MainWindow::remove_id() {
  // remove a vm_id from the list
  ui->vm_ids->removeItemWidget(ui->vm_ids->takeItem(ui->vm_ids->currentRow()));
  ui->delete_button->clearFocus();
}

void MainWindow::on_vm_id_returnPressed() { add_id(); }

void MainWindow::add_id() {
  // add the id to the list
  QString vm_ID = ui->vm_id->text();

  if (vm_ID != "") {
    ui->vm_ids->addItem(vm_ID);
  }
  ui->add_vm_id->clearFocus();
  ui->vm_id->setText("");
}

void MainWindow::closeEvent(QCloseEvent *event) {
  event->accept();
  // save the current vm_id list on exit
  c->vm_ids.clear();
  for (int i = 0; i < ui->vm_ids->count(); i++) {
    c->vm_ids.push_back(ui->vm_ids->item(i)->text().toUtf8().constData());
  }
  // write the config to disk
  c->safe();
}

void MainWindow::on_blacklist_button_clicked() {
  // blacklist a device
  auto item = ui->usb_devices->takeItem(ui->usb_devices->currentRow());

  QString device = item->text();

  ui->blacklist->removeItemWidget(item);
  ui->blacklist->addItem(device);
  c->blacklist.push_back(device.toUtf8().constData());

  ui->blacklist_button->clearFocus();
}

void MainWindow::on_button_whitelist_clicked() {
  // whitelist a device again

  auto item = ui->blacklist->takeItem(ui->blacklist->currentRow());
  ui->blacklist->removeItemWidget(item);
  for (unsigned int i = 0; i < c->blacklist.size(); i++) {
    if (item->text().toUtf8().constData() == c->blacklist[i]) {

      c->blacklist.erase(c->blacklist.begin() + i);
      break;
    }
  }
  ui->button_whitelist->clearFocus();
}

void MainWindow::on_sudo_command_editingFinished() {
  c->sudo = ui->sudo_command->text().toUtf8().constData();
}

void MainWindow::on_button_quotes_stateChanged(int arg1) {
  if (arg1 == 0) {
    c->quotes = "false";
  } else {
    c->quotes = "true";
  }
}
