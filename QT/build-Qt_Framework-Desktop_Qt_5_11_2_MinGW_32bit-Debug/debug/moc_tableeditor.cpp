/****************************************************************************
** Meta object code from reading C++ file 'tableeditor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Qt_Framework/tableeditor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tableeditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TableEditor_t {
    QByteArrayData data[8];
    char stringdata0[136];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TableEditor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TableEditor_t qt_meta_stringdata_TableEditor = {
    {
QT_MOC_LITERAL(0, 0, 11), // "TableEditor"
QT_MOC_LITERAL(1, 12, 19), // "on_Loaddata_clicked"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 22), // "on_ConnectToDB_clicked"
QT_MOC_LITERAL(4, 56, 34), // "on_connection_result_linkActi..."
QT_MOC_LITERAL(5, 91, 4), // "link"
QT_MOC_LITERAL(6, 96, 30), // "on_TableEditor_iconSizeChanged"
QT_MOC_LITERAL(7, 127, 8) // "iconSize"

    },
    "TableEditor\0on_Loaddata_clicked\0\0"
    "on_ConnectToDB_clicked\0"
    "on_connection_result_linkActivated\0"
    "link\0on_TableEditor_iconSizeChanged\0"
    "iconSize"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TableEditor[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08 /* Private */,
       3,    0,   35,    2, 0x08 /* Private */,
       4,    1,   36,    2, 0x08 /* Private */,
       6,    1,   39,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QSize,    7,

       0        // eod
};

void TableEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TableEditor *_t = static_cast<TableEditor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_Loaddata_clicked(); break;
        case 1: _t->on_ConnectToDB_clicked(); break;
        case 2: _t->on_connection_result_linkActivated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->on_TableEditor_iconSizeChanged((*reinterpret_cast< const QSize(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TableEditor::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_TableEditor.data,
      qt_meta_data_TableEditor,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *TableEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TableEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TableEditor.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int TableEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE