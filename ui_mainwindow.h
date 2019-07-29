/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_4;
    QTabWidget *tabWidget;
    QWidget *tab_main;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_2;
    QListWidget *vm_ids;
    QTextBrowser *log;
    QPushButton *add_vm_id;
    QPushButton *blacklist_button;
    QPushButton *delete_button;
    QListWidget *usb_devices;
    QLineEdit *vm_id;
    QLineEdit *sudo_command;
    QLineEdit *search_bar;
    QCheckBox *button_quotes;
    QWidget *tab_blacklist;
    QGridLayout *gridLayout_5;
    QListWidget *blacklist;
    QPushButton *button_whitelist;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(655, 569);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        centralWidget->setEnabled(true);
        gridLayout_4 = new QGridLayout(centralWidget);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab_main = new QWidget();
        tab_main->setObjectName(QString::fromUtf8("tab_main"));
        gridLayout_3 = new QGridLayout(tab_main);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        vm_ids = new QListWidget(tab_main);
        vm_ids->setObjectName(QString::fromUtf8("vm_ids"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(vm_ids->sizePolicy().hasHeightForWidth());
        vm_ids->setSizePolicy(sizePolicy);
        vm_ids->setMaximumSize(QSize(16777215, 80));
        vm_ids->setDragDropMode(QAbstractItemView::InternalMove);

        gridLayout_2->addWidget(vm_ids, 8, 0, 1, 1);

        log = new QTextBrowser(tab_main);
        log->setObjectName(QString::fromUtf8("log"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(1);
        sizePolicy1.setHeightForWidth(log->sizePolicy().hasHeightForWidth());
        log->setSizePolicy(sizePolicy1);
        log->setMaximumSize(QSize(16777215, 192));

        gridLayout_2->addWidget(log, 12, 0, 1, 2);

        add_vm_id = new QPushButton(tab_main);
        add_vm_id->setObjectName(QString::fromUtf8("add_vm_id"));

        gridLayout_2->addWidget(add_vm_id, 6, 1, 1, 1);

        blacklist_button = new QPushButton(tab_main);
        blacklist_button->setObjectName(QString::fromUtf8("blacklist_button"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(blacklist_button->sizePolicy().hasHeightForWidth());
        blacklist_button->setSizePolicy(sizePolicy2);
        blacklist_button->setFocusPolicy(Qt::StrongFocus);

        gridLayout_2->addWidget(blacklist_button, 5, 1, 1, 1);

        delete_button = new QPushButton(tab_main);
        delete_button->setObjectName(QString::fromUtf8("delete_button"));
        sizePolicy2.setHeightForWidth(delete_button->sizePolicy().hasHeightForWidth());
        delete_button->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(delete_button, 7, 1, 4, 1);

        usb_devices = new QListWidget(tab_main);
        usb_devices->setObjectName(QString::fromUtf8("usb_devices"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(3);
        sizePolicy3.setHeightForWidth(usb_devices->sizePolicy().hasHeightForWidth());
        usb_devices->setSizePolicy(sizePolicy3);
        usb_devices->setFlow(QListView::TopToBottom);
        usb_devices->setSortingEnabled(false);

        gridLayout_2->addWidget(usb_devices, 5, 0, 1, 1);

        vm_id = new QLineEdit(tab_main);
        vm_id->setObjectName(QString::fromUtf8("vm_id"));

        gridLayout_2->addWidget(vm_id, 6, 0, 1, 1);

        sudo_command = new QLineEdit(tab_main);
        sudo_command->setObjectName(QString::fromUtf8("sudo_command"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(sudo_command->sizePolicy().hasHeightForWidth());
        sudo_command->setSizePolicy(sizePolicy4);

        gridLayout_2->addWidget(sudo_command, 2, 1, 1, 1);

        search_bar = new QLineEdit(tab_main);
        search_bar->setObjectName(QString::fromUtf8("search_bar"));

        gridLayout_2->addWidget(search_bar, 2, 0, 1, 1);

        button_quotes = new QCheckBox(tab_main);
        button_quotes->setObjectName(QString::fromUtf8("button_quotes"));

        gridLayout_2->addWidget(button_quotes, 4, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 0, 0, 1, 1);

        tabWidget->addTab(tab_main, QString());
        tab_blacklist = new QWidget();
        tab_blacklist->setObjectName(QString::fromUtf8("tab_blacklist"));
        gridLayout_5 = new QGridLayout(tab_blacklist);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        blacklist = new QListWidget(tab_blacklist);
        blacklist->setObjectName(QString::fromUtf8("blacklist"));

        gridLayout_5->addWidget(blacklist, 0, 1, 1, 1);

        button_whitelist = new QPushButton(tab_blacklist);
        button_whitelist->setObjectName(QString::fromUtf8("button_whitelist"));
        sizePolicy2.setHeightForWidth(button_whitelist->sizePolicy().hasHeightForWidth());
        button_whitelist->setSizePolicy(sizePolicy2);

        gridLayout_5->addWidget(button_whitelist, 0, 2, 1, 1);

        tabWidget->addTab(tab_blacklist, QString());

        gridLayout_4->addWidget(tabWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 655, 30));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);
        vm_ids->setCurrentRow(-1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "libvirt-usb-gui", nullptr));
        add_vm_id->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        blacklist_button->setText(QCoreApplication::translate("MainWindow", "Blacklist", nullptr));
        delete_button->setText(QCoreApplication::translate("MainWindow", "Delete", nullptr));
        vm_id->setPlaceholderText(QCoreApplication::translate("MainWindow", "vm-id", nullptr));
        sudo_command->setPlaceholderText(QCoreApplication::translate("MainWindow", "sudo command", nullptr));
#if QT_CONFIG(tooltip)
        search_bar->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        search_bar->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        search_bar->setWhatsThis(QString());
#endif // QT_CONFIG(whatsthis)
        search_bar->setPlaceholderText(QCoreApplication::translate("MainWindow", "Search", nullptr));
#if QT_CONFIG(tooltip)
        button_quotes->setToolTip(QCoreApplication::translate("MainWindow", "wrap command in double quotes", nullptr));
#endif // QT_CONFIG(tooltip)
        button_quotes->setText(QCoreApplication::translate("MainWindow", "Quotes", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_main), QCoreApplication::translate("MainWindow", "Main", nullptr));
        button_whitelist->setText(QCoreApplication::translate("MainWindow", "Whitelist", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_blacklist), QCoreApplication::translate("MainWindow", "Blacklist", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
