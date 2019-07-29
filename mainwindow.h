#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QKeyEvent>
#include <QListWidgetItem>
#include <QMainWindow>
#include <array>
#include <chrono>
#include <cstdio>
#include <iostream>
#include <memory>
#include <sstream>
#include <stdexcept>
#include <string>
#include <thread>
#include <vector>

namespace Ui {
class MainWindow;
}
bool contains_search(Ui::MainWindow *ui, std::string ds);
bool is_blacklisted(std::string device);
class MainWindow : public QMainWindow {
  Q_OBJECT

public:
  explicit MainWindow(QWidget *parent = nullptr);

  ~MainWindow();

private slots:

  void on_usb_devices_itemDoubleClicked(QListWidgetItem *item);

  void on_search_bar_textChanged(const QString &arg1);
  void closeEvent(QCloseEvent *event);
  void on_add_vm_id_clicked();
  void keyPressEvent(QKeyEvent *event);

  void remove_id();
  void add_id();

  void on_delete_button_clicked();

  void on_vm_id_returnPressed();

  void on_blacklist_button_clicked();

  void on_button_whitelist_clicked();

  void on_sudo_command_editingFinished();

  void on_button_quotes_stateChanged(int arg1);

private:
  Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
