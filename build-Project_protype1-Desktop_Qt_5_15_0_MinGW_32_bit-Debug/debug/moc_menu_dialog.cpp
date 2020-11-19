/****************************************************************************
** Meta object code from reading C++ file 'menu_dialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Project_protype1/menu_dialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'menu_dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_menu_dialog_t {
    QByteArrayData data[8];
    char stringdata0[194];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_menu_dialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_menu_dialog_t qt_meta_stringdata_menu_dialog = {
    {
QT_MOC_LITERAL(0, 0, 11), // "menu_dialog"
QT_MOC_LITERAL(1, 12, 18), // "recibeDatosUsuario"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 24), // "on_buscar_LE_textChanged"
QT_MOC_LITERAL(4, 57, 4), // "arg1"
QT_MOC_LITERAL(5, 62, 41), // "on_comboBox_sortLibros_curren..."
QT_MOC_LITERAL(6, 104, 44), // "on_comboBox_sortMislibros_cur..."
QT_MOC_LITERAL(7, 149, 44) // "on_comboBox_sortFavoritos_cur..."

    },
    "menu_dialog\0recibeDatosUsuario\0\0"
    "on_buscar_LE_textChanged\0arg1\0"
    "on_comboBox_sortLibros_currentTextChanged\0"
    "on_comboBox_sortMislibros_currentTextChanged\0"
    "on_comboBox_sortFavoritos_currentTextChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_menu_dialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    3,   39,    2, 0x08 /* Private */,
       3,    1,   46,    2, 0x08 /* Private */,
       5,    1,   49,    2, 0x08 /* Private */,
       6,    1,   52,    2, 0x08 /* Private */,
       7,    1,   55,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,    2,    2,    2,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,

       0        // eod
};

void menu_dialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<menu_dialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->recibeDatosUsuario((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 1: _t->on_buscar_LE_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->on_comboBox_sortLibros_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->on_comboBox_sortMislibros_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->on_comboBox_sortFavoritos_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject menu_dialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_menu_dialog.data,
    qt_meta_data_menu_dialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *menu_dialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *menu_dialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_menu_dialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int menu_dialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
