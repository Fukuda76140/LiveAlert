/****************************************************************************
** Meta object code from reading C++ file 'live_alert.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../live_alert.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'live_alert.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_live_alert_t {
    QByteArrayData data[16];
    char stringdata[205];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_live_alert_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_live_alert_t qt_meta_stringdata_live_alert = {
    {
QT_MOC_LITERAL(0, 0, 10), // "live_alert"
QT_MOC_LITERAL(1, 11, 26), // "on_cb_plateforme_activated"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 4), // "arg1"
QT_MOC_LITERAL(4, 44, 20), // "on_btn_ajout_clicked"
QT_MOC_LITERAL(5, 65, 15), // "on_test_clicked"
QT_MOC_LITERAL(6, 81, 11), // "refresh_all"
QT_MOC_LITERAL(7, 93, 9), // "hideEvent"
QT_MOC_LITERAL(8, 103, 11), // "QHideEvent*"
QT_MOC_LITERAL(9, 115, 5), // "event"
QT_MOC_LITERAL(10, 121, 13), // "stray_quitter"
QT_MOC_LITERAL(11, 135, 10), // "stray_show"
QT_MOC_LITERAL(12, 146, 16), // "on_tab_activated"
QT_MOC_LITERAL(13, 163, 5), // "index"
QT_MOC_LITERAL(14, 169, 20), // "on_btn_suppr_clicked"
QT_MOC_LITERAL(15, 190, 14) // "on_tab_clicked"

    },
    "live_alert\0on_cb_plateforme_activated\0"
    "\0arg1\0on_btn_ajout_clicked\0on_test_clicked\0"
    "refresh_all\0hideEvent\0QHideEvent*\0"
    "event\0stray_quitter\0stray_show\0"
    "on_tab_activated\0index\0on_btn_suppr_clicked\0"
    "on_tab_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_live_alert[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x08 /* Private */,
       4,    0,   67,    2, 0x08 /* Private */,
       5,    0,   68,    2, 0x08 /* Private */,
       6,    0,   69,    2, 0x08 /* Private */,
       7,    1,   70,    2, 0x08 /* Private */,
      10,    0,   73,    2, 0x08 /* Private */,
      11,    0,   74,    2, 0x08 /* Private */,
      12,    1,   75,    2, 0x08 /* Private */,
      14,    0,   78,    2, 0x08 /* Private */,
      15,    1,   79,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,   13,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,   13,

       0        // eod
};

void live_alert::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        live_alert *_t = static_cast<live_alert *>(_o);
        switch (_id) {
        case 0: _t->on_cb_plateforme_activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->on_btn_ajout_clicked(); break;
        case 2: _t->on_test_clicked(); break;
        case 3: _t->refresh_all(); break;
        case 4: _t->hideEvent((*reinterpret_cast< QHideEvent*(*)>(_a[1]))); break;
        case 5: _t->stray_quitter(); break;
        case 6: _t->stray_show(); break;
        case 7: _t->on_tab_activated((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 8: _t->on_btn_suppr_clicked(); break;
        case 9: _t->on_tab_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject live_alert::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_live_alert.data,
      qt_meta_data_live_alert,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *live_alert::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *live_alert::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_live_alert.stringdata))
        return static_cast<void*>(const_cast< live_alert*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int live_alert::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
