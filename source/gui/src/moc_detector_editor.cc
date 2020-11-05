/****************************************************************************
** Meta object code from reading C++ file 'detector_editor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "detector_editor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'detector_editor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_descriptionTab_t {
    QByteArrayData data[7];
    char stringdata0[80];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_descriptionTab_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_descriptionTab_t qt_meta_stringdata_descriptionTab = {
    {
QT_MOC_LITERAL(0, 0, 14), // "descriptionTab"
QT_MOC_LITERAL(1, 15, 16), // "change_placement"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 16), // "change_dimension"
QT_MOC_LITERAL(4, 50, 15), // "update_detector"
QT_MOC_LITERAL(5, 66, 9), // "detector*"
QT_MOC_LITERAL(6, 76, 3) // "Det"

    },
    "descriptionTab\0change_placement\0\0"
    "change_dimension\0update_detector\0"
    "detector*\0Det"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_descriptionTab[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x08 /* Private */,
       3,    0,   30,    2, 0x08 /* Private */,
       4,    1,   31,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,

       0        // eod
};

void descriptionTab::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        descriptionTab *_t = static_cast<descriptionTab *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->change_placement(); break;
        case 1: _t->change_dimension(); break;
        case 2: _t->update_detector((*reinterpret_cast< detector*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject descriptionTab::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_descriptionTab.data,
      qt_meta_data_descriptionTab,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *descriptionTab::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *descriptionTab::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_descriptionTab.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int descriptionTab::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
