#ifndef MAIN_H
#define MAIN_H
#include <QListWidgetItem>
#include <QMainWindow>
#include <config.h>
#include <mainwindow.h>
#include <ui_mainwindow.h>

std::string exec(std::string cmd);
[[noreturn]] void get_usb_devices(Ui::MainWindow *ui,
                                  std::vector<std::string> *devices);
void connector(Ui::MainWindow *ui, std::string device, config *c);

#endif // MAIN_H
