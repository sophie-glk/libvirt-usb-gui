#include <config.h>

using namespace std;
const string vm_id_id = "vm";
const string bl_id = "bl";
const string sudo_id = "sudo";
const string quote_id = "quotes";
config::config(string conf_FILE) {
  conf_file = conf_FILE;
  read();
}

void config::read() {

  ifstream conf_stream(conf_file);
  string line;

  int i = 0;
  // read file line by line
  while (getline(conf_stream, line)) {

    for (unsigned int j = 0; j < line.size(); j++) {

      if (line.substr(j, 1) == "=") {
        string id = line.substr(0, j);
        string value = line.substr(j + 1, line.length() - j);
        if (id == vm_id_id) {
          vm_ids.push_back(value);
        } else if (id == bl_id) {
          blacklist.push_back(value);
          break;
        } else if (id == sudo_id) {
          sudo = value;
        } else if (id == quote_id) {
          quotes = value;
        }
      }

      i++;
    }
  }
  conf_stream.close();
}

void config::safe() {
  // save file
  ofstream conf_stream(conf_file);
  for (unsigned int i = 0; i < vm_ids.size(); i++) {
    conf_stream << vm_id_id << "=" << vm_ids[i] << "\n";
  }
  for (unsigned int i = 0; i < blacklist.size(); i++) {
    conf_stream << bl_id << "=" << blacklist[i] << "\n";
  }
  conf_stream << sudo_id << "=" << sudo << "\n";
  conf_stream << quote_id << "=" << quotes << "\n";
  conf_stream.close();
}
