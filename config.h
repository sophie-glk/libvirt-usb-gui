#ifndef CONFIG_H
#define CONFIG_H
#include <fstream>
#include <mainwindow.h>
class config {

public:
  std::vector<std::string> vm_ids;
  std::vector<std::string> blacklist;
  std::string conf_file = "";
  std::string sudo = "sudo";
  std::string quotes;
  void read();
  void setconf_file(std::string conf_FILE);
  config(std::string conf_FILE);
  void safe();
};

void safe_conf();
void setconf_file(std::string conf_FILE);
#endif // CONFIG_H
