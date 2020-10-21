/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[21];
    char stringdata0[206];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 12), // "ChangeFigure"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 1), // "i"
QT_MOC_LITERAL(4, 27, 10), // "ChangeSide"
QT_MOC_LITERAL(5, 38, 14), // "ChangeVertical"
QT_MOC_LITERAL(6, 53, 16), // "ChangeHorizontal"
QT_MOC_LITERAL(7, 70, 10), // "ChangeMove"
QT_MOC_LITERAL(8, 81, 4), // "move"
QT_MOC_LITERAL(9, 86, 8), // "ShowMove"
QT_MOC_LITERAL(10, 95, 12), // "ChangeCursor"
QT_MOC_LITERAL(11, 108, 4), // "hand"
QT_MOC_LITERAL(12, 113, 13), // "MovingFigures"
QT_MOC_LITERAL(13, 127, 5), // "About"
QT_MOC_LITERAL(14, 133, 10), // "ChangeVert"
QT_MOC_LITERAL(15, 144, 11), // "ChangeHoriz"
QT_MOC_LITERAL(16, 156, 9), // "StopTimer"
QT_MOC_LITERAL(17, 166, 12), // "ChooseFigure"
QT_MOC_LITERAL(18, 179, 9), // "PlayMedia"
QT_MOC_LITERAL(19, 189, 7), // "OnSound"
QT_MOC_LITERAL(20, 197, 8) // "OffSound"

    },
    "MainWindow\0ChangeFigure\0\0i\0ChangeSide\0"
    "ChangeVertical\0ChangeHorizontal\0"
    "ChangeMove\0move\0ShowMove\0ChangeCursor\0"
    "hand\0MovingFigures\0About\0ChangeVert\0"
    "ChangeHoriz\0StopTimer\0ChooseFigure\0"
    "PlayMedia\0OnSound\0OffSound"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   94,    2, 0x0a /* Public */,
       4,    1,   97,    2, 0x0a /* Public */,
       5,    1,  100,    2, 0x0a /* Public */,
       6,    1,  103,    2, 0x0a /* Public */,
       7,    1,  106,    2, 0x0a /* Public */,
       9,    0,  109,    2, 0x0a /* Public */,
      10,    1,  110,    2, 0x0a /* Public */,
      12,    0,  113,    2, 0x0a /* Public */,
      13,    0,  114,    2, 0x0a /* Public */,
      14,    1,  115,    2, 0x0a /* Public */,
      15,    1,  118,    2, 0x0a /* Public */,
      16,    0,  121,    2, 0x0a /* Public */,
      17,    0,  122,    2, 0x0a /* Public */,
      18,    0,  123,    2, 0x0a /* Public */,
      19,    0,  124,    2, 0x0a /* Public */,
      20,    0,  125,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ChangeFigure((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->ChangeSide((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->ChangeVertical((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->ChangeHorizontal((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->ChangeMove((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->ShowMove(); break;
        case 6: _t->ChangeCursor((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->MovingFigures(); break;
        case 8: _t->About(); break;
        case 9: _t->ChangeVert((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->ChangeHoriz((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->StopTimer(); break;
        case 12: _t->ChooseFigure(); break;
        case 13: _t->PlayMedia(); break;
        case 14: _t->OnSound(); break;
        case 15: _t->OffSound(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
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
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
