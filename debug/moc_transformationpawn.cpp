/****************************************************************************
** Meta object code from reading C++ file 'transformationpawn.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../transformationpawn.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'transformationpawn.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TransformationPawn_t {
    QByteArrayData data[8];
    char stringdata0[114];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TransformationPawn_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TransformationPawn_t qt_meta_stringdata_TransformationPawn = {
    {
QT_MOC_LITERAL(0, 0, 18), // "TransformationPawn"
QT_MOC_LITERAL(1, 19, 10), // "ChangePawn"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 1), // "i"
QT_MOC_LITERAL(4, 33, 19), // "on_pB_Queen_clicked"
QT_MOC_LITERAL(5, 53, 18), // "on_pB_Rook_clicked"
QT_MOC_LITERAL(6, 72, 20), // "on_pB_Bishop_clicked"
QT_MOC_LITERAL(7, 93, 20) // "on_pB_Knight_clicked"

    },
    "TransformationPawn\0ChangePawn\0\0i\0"
    "on_pB_Queen_clicked\0on_pB_Rook_clicked\0"
    "on_pB_Bishop_clicked\0on_pB_Knight_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TransformationPawn[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   42,    2, 0x08 /* Private */,
       5,    0,   43,    2, 0x08 /* Private */,
       6,    0,   44,    2, 0x08 /* Private */,
       7,    0,   45,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void TransformationPawn::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TransformationPawn *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ChangePawn((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_pB_Queen_clicked(); break;
        case 2: _t->on_pB_Rook_clicked(); break;
        case 3: _t->on_pB_Bishop_clicked(); break;
        case 4: _t->on_pB_Knight_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TransformationPawn::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TransformationPawn::ChangePawn)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TransformationPawn::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_TransformationPawn.data,
    qt_meta_data_TransformationPawn,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TransformationPawn::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TransformationPawn::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TransformationPawn.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int TransformationPawn::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void TransformationPawn::ChangePawn(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
