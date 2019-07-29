/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[21];
    char stringdata0[357];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 32), // "on_usb_devices_itemDoubleClicked"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(4, 62, 4), // "item"
QT_MOC_LITERAL(5, 67, 25), // "on_search_bar_textChanged"
QT_MOC_LITERAL(6, 93, 4), // "arg1"
QT_MOC_LITERAL(7, 98, 10), // "closeEvent"
QT_MOC_LITERAL(8, 109, 12), // "QCloseEvent*"
QT_MOC_LITERAL(9, 122, 5), // "event"
QT_MOC_LITERAL(10, 128, 20), // "on_add_vm_id_clicked"
QT_MOC_LITERAL(11, 149, 13), // "keyPressEvent"
QT_MOC_LITERAL(12, 163, 10), // "QKeyEvent*"
QT_MOC_LITERAL(13, 174, 9), // "remove_id"
QT_MOC_LITERAL(14, 184, 6), // "add_id"
QT_MOC_LITERAL(15, 191, 24), // "on_delete_button_clicked"
QT_MOC_LITERAL(16, 216, 22), // "on_vm_id_returnPressed"
QT_MOC_LITERAL(17, 239, 27), // "on_blacklist_button_clicked"
QT_MOC_LITERAL(18, 267, 27), // "on_button_whitelist_clicked"
QT_MOC_LITERAL(19, 295, 31), // "on_sudo_command_editingFinished"
QT_MOC_LITERAL(20, 327, 29) // "on_button_quotes_stateChanged"

    },
    "MainWindow\0on_usb_devices_itemDoubleClicked\0"
    "\0QListWidgetItem*\0item\0on_search_bar_textChanged\0"
    "arg1\0closeEvent\0QCloseEvent*\0event\0"
    "on_add_vm_id_clicked\0keyPressEvent\0"
    "QKeyEvent*\0remove_id\0add_id\0"
    "on_delete_button_clicked\0"
    "on_vm_id_returnPressed\0"
    "on_blacklist_button_clicked\0"
    "on_button_whitelist_clicked\0"
    "on_sudo_command_editingFinished\0"
    "on_button_quotes_stateChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x08 /* Private */,
       5,    1,   82,    2, 0x08 /* Private */,
       7,    1,   85,    2, 0x08 /* Private */,
      10,    0,   88,    2, 0x08 /* Private */,
      11,    1,   89,    2, 0x08 /* Private */,
      13,    0,   92,    2, 0x08 /* Private */,
      14,    0,   93,    2, 0x08 /* Private */,
      15,    0,   94,    2, 0x08 /* Private */,
      16,    0,   95,    2, 0x08 /* Private */,
      17,    0,   96,    2, 0x08 /* Private */,
      18,    0,   97,    2, 0x08 /* Private */,
      19,    0,   98,    2, 0x08 /* Private */,
      20,    1,   99,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_usb_devices_itemDoubleClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 1: _t->on_search_bar_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->closeEvent((*reinterpret_cast< QCloseEvent*(*)>(_a[1]))); break;
        case 3: _t->on_add_vm_id_clicked(); break;
        case 4: _t->keyPressEvent((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        case 5: _t->remove_id(); break;
        case 6: _t->add_id(); break;
        case 7: _t->on_delete_button_clicked(); break;
        case 8: _t->on_vm_id_returnPressed(); break;
        case 9: _t->on_blacklist_button_clicked(); break;
        case 10: _t->on_button_whitelist_clicked(); break;
        case 11: _t->on_sudo_command_editingFinished(); break;
        case 12: _t->on_button_quotes_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
