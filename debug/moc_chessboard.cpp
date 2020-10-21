/****************************************************************************
** Meta object code from reading C++ file 'chessboard.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../chessboard.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'chessboard.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ChessBoard_t {
    QByteArrayData data[12];
    char stringdata0[124];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ChessBoard_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ChessBoard_t qt_meta_stringdata_ChessBoard = {
    {
QT_MOC_LITERAL(0, 0, 10), // "ChessBoard"
QT_MOC_LITERAL(1, 11, 11), // "CloseCursor"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 4), // "hand"
QT_MOC_LITERAL(4, 29, 16), // "ChangeHorizontal"
QT_MOC_LITERAL(5, 46, 1), // "i"
QT_MOC_LITERAL(6, 48, 14), // "ChangeVertical"
QT_MOC_LITERAL(7, 63, 9), // "StopTimer"
QT_MOC_LITERAL(8, 73, 10), // "ChangePawn"
QT_MOC_LITERAL(9, 84, 9), // "WrongMove"
QT_MOC_LITERAL(10, 94, 15), // "ShowPosibleMove"
QT_MOC_LITERAL(11, 110, 13) // "MovingFigures"

    },
    "ChessBoard\0CloseCursor\0\0hand\0"
    "ChangeHorizontal\0i\0ChangeVertical\0"
    "StopTimer\0ChangePawn\0WrongMove\0"
    "ShowPosibleMove\0MovingFigures"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ChessBoard[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       4,    1,   57,    2, 0x06 /* Public */,
       6,    1,   60,    2, 0x06 /* Public */,
       7,    0,   63,    2, 0x06 /* Public */,
       8,    0,   64,    2, 0x06 /* Public */,
       9,    0,   65,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    0,   66,    2, 0x0a /* Public */,
      11,    0,   67,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ChessBoard::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ChessBoard *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->CloseCursor((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->ChangeHorizontal((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->ChangeVertical((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->StopTimer(); break;
        case 4: _t->ChangePawn(); break;
        case 5: _t->WrongMove(); break;
        case 6: _t->ShowPosibleMove(); break;
        case 7: _t->MovingFigures(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ChessBoard::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChessBoard::CloseCursor)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ChessBoard::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChessBoard::ChangeHorizontal)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ChessBoard::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChessBoard::ChangeVertical)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ChessBoard::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChessBoard::StopTimer)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ChessBoard::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChessBoard::ChangePawn)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (ChessBoard::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChessBoard::WrongMove)) {
                *result = 5;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ChessBoard::staticMetaObject = { {
    QMetaObject::SuperData::link<QGraphicsScene::staticMetaObject>(),
    qt_meta_stringdata_ChessBoard.data,
    qt_meta_data_ChessBoard,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ChessBoard::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ChessBoard::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ChessBoard.stringdata0))
        return static_cast<void*>(this);
    return QGraphicsScene::qt_metacast(_clname);
}

int ChessBoard::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsScene::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void ChessBoard::CloseCursor(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ChessBoard::ChangeHorizontal(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ChessBoard::ChangeVertical(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ChessBoard::StopTimer()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void ChessBoard::ChangePawn()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void ChessBoard::WrongMove()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
