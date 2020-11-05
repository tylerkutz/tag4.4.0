/****************************************************************************
** Meta object code from reading C++ file 'g4dialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "g4dialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'g4dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_g4dialog_t {
    QByteArrayData data[16];
    char stringdata0[246];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_g4dialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_g4dialog_t qt_meta_stringdata_g4dialog = {
    {
QT_MOC_LITERAL(0, 0, 8), // "g4dialog"
QT_MOC_LITERAL(1, 9, 22), // "CommandHistoryCallback"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 22), // "CommandEnteredCallback"
QT_MOC_LITERAL(4, 56, 14), // "CreateHelpTree"
QT_MOC_LITERAL(5, 71, 12), // "QTreeWidget*"
QT_MOC_LITERAL(6, 84, 15), // "CreateChildTree"
QT_MOC_LITERAL(7, 100, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(8, 117, 7), // "aParent"
QT_MOC_LITERAL(9, 125, 16), // "G4UIcommandTree*"
QT_MOC_LITERAL(10, 142, 12), // "aCommandTree"
QT_MOC_LITERAL(11, 155, 20), // "HelpTreeClicCallback"
QT_MOC_LITERAL(12, 176, 14), // "GetCommandList"
QT_MOC_LITERAL(13, 191, 18), // "const G4UIcommand*"
QT_MOC_LITERAL(14, 210, 8), // "aCommand"
QT_MOC_LITERAL(15, 219, 26) // "HelpTreeDoubleClicCallback"

    },
    "g4dialog\0CommandHistoryCallback\0\0"
    "CommandEnteredCallback\0CreateHelpTree\0"
    "QTreeWidget*\0CreateChildTree\0"
    "QTreeWidgetItem*\0aParent\0G4UIcommandTree*\0"
    "aCommandTree\0HelpTreeClicCallback\0"
    "GetCommandList\0const G4UIcommand*\0"
    "aCommand\0HelpTreeDoubleClicCallback"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_g4dialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       6,    2,   52,    2, 0x08 /* Private */,
      11,    0,   57,    2, 0x08 /* Private */,
      12,    1,   58,    2, 0x08 /* Private */,
      15,    0,   61,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    0x80000000 | 5,
    QMetaType::Void, 0x80000000 | 7, 0x80000000 | 9,    8,   10,
    QMetaType::Void,
    QMetaType::QString, 0x80000000 | 13,   14,
    QMetaType::Void,

       0        // eod
};

void g4dialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        g4dialog *_t = static_cast<g4dialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->CommandHistoryCallback(); break;
        case 1: _t->CommandEnteredCallback(); break;
        case 2: { QTreeWidget* _r = _t->CreateHelpTree();
            if (_a[0]) *reinterpret_cast< QTreeWidget**>(_a[0]) = std::move(_r); }  break;
        case 3: _t->CreateChildTree((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< G4UIcommandTree*(*)>(_a[2]))); break;
        case 4: _t->HelpTreeClicCallback(); break;
        case 5: { QString _r = _t->GetCommandList((*reinterpret_cast< const G4UIcommand*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 6: _t->HelpTreeDoubleClicCallback(); break;
        default: ;
        }
    }
}

const QMetaObject g4dialog::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_g4dialog.data,
      qt_meta_data_g4dialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *g4dialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *g4dialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_g4dialog.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int g4dialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
