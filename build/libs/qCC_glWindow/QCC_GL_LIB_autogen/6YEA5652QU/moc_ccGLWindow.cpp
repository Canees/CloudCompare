/****************************************************************************
** Meta object code from reading C++ file 'ccGLWindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../libs/qCC_glWindow/include/ccGLWindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ccGLWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ccGLWindow_t {
    QByteArrayData data[8];
    char stringdata0[77];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ccGLWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ccGLWindow_t qt_meta_stringdata_ccGLWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "ccGLWindow"
QT_MOC_LITERAL(1, 11, 20), // "onItemPickedFastSlot"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 10), // "ccHObject*"
QT_MOC_LITERAL(4, 44, 12), // "pickedEntity"
QT_MOC_LITERAL(5, 57, 15), // "pickedItemIndex"
QT_MOC_LITERAL(6, 73, 1), // "x"
QT_MOC_LITERAL(7, 75, 1) // "y"

    },
    "ccGLWindow\0onItemPickedFastSlot\0\0"
    "ccHObject*\0pickedEntity\0pickedItemIndex\0"
    "x\0y"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ccGLWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    4,   19,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Int, QMetaType::Int,    4,    5,    6,    7,

       0        // eod
};

void ccGLWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ccGLWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onItemPickedFastSlot((*reinterpret_cast< ccHObject*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ccGLWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QOpenGLWidget::staticMetaObject>(),
    qt_meta_stringdata_ccGLWindow.data,
    qt_meta_data_ccGLWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ccGLWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ccGLWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ccGLWindow.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "ccGLWindowInterface"))
        return static_cast< ccGLWindowInterface*>(this);
    return QOpenGLWidget::qt_metacast(_clname);
}

int ccGLWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QOpenGLWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
