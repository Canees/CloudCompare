/****************************************************************************
** Meta object code from reading C++ file 'ccGLWindowStereo.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../libs/qCC_glWindow/include/ccGLWindowStereo.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ccGLWindowStereo.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ccGLWindowStereo_t {
    QByteArrayData data[8];
    char stringdata0[83];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ccGLWindowStereo_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ccGLWindowStereo_t qt_meta_stringdata_ccGLWindowStereo = {
    {
QT_MOC_LITERAL(0, 0, 16), // "ccGLWindowStereo"
QT_MOC_LITERAL(1, 17, 20), // "onItemPickedFastSlot"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 10), // "ccHObject*"
QT_MOC_LITERAL(4, 50, 12), // "pickedEntity"
QT_MOC_LITERAL(5, 63, 15), // "pickedItemIndex"
QT_MOC_LITERAL(6, 79, 1), // "x"
QT_MOC_LITERAL(7, 81, 1) // "y"

    },
    "ccGLWindowStereo\0onItemPickedFastSlot\0"
    "\0ccHObject*\0pickedEntity\0pickedItemIndex\0"
    "x\0y"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ccGLWindowStereo[] = {

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

void ccGLWindowStereo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ccGLWindowStereo *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onItemPickedFastSlot((*reinterpret_cast< ccHObject*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ccGLWindowStereo::staticMetaObject = { {
    QMetaObject::SuperData::link<QWindow::staticMetaObject>(),
    qt_meta_stringdata_ccGLWindowStereo.data,
    qt_meta_data_ccGLWindowStereo,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ccGLWindowStereo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ccGLWindowStereo::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ccGLWindowStereo.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "ccGLWindowInterface"))
        return static_cast< ccGLWindowInterface*>(this);
    return QWindow::qt_metacast(_clname);
}

int ccGLWindowStereo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWindow::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_ccGLStereoWidget_t {
    QByteArrayData data[1];
    char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ccGLStereoWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ccGLStereoWidget_t qt_meta_stringdata_ccGLStereoWidget = {
    {
QT_MOC_LITERAL(0, 0, 16) // "ccGLStereoWidget"

    },
    "ccGLStereoWidget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ccGLStereoWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void ccGLStereoWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject ccGLStereoWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ccGLStereoWidget.data,
    qt_meta_data_ccGLStereoWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ccGLStereoWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ccGLStereoWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ccGLStereoWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ccGLStereoWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
