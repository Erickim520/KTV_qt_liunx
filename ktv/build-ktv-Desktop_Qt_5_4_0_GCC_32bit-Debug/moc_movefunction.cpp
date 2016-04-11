/****************************************************************************
** Meta object code from reading C++ file 'movefunction.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ktv/movefunction.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'movefunction.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_movefunction_t {
    QByteArrayData data[5];
    char stringdata[54];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_movefunction_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_movefunction_t qt_meta_stringdata_movefunction = {
    {
QT_MOC_LITERAL(0, 0, 12), // "movefunction"
QT_MOC_LITERAL(1, 13, 8), // "funcpage"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 13), // "buttonGroup_x"
QT_MOC_LITERAL(4, 37, 16) // "QAbstractButton*"

    },
    "movefunction\0funcpage\0\0buttonGroup_x\0"
    "QAbstractButton*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_movefunction[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   27,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    2,

       0        // eod
};

void movefunction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        movefunction *_t = static_cast<movefunction *>(_o);
        switch (_id) {
        case 0: _t->funcpage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->buttonGroup_x((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractButton* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (movefunction::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&movefunction::funcpage)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject movefunction::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_movefunction.data,
      qt_meta_data_movefunction,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *movefunction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *movefunction::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_movefunction.stringdata))
        return static_cast<void*>(const_cast< movefunction*>(this));
    return QWidget::qt_metacast(_clname);
}

int movefunction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void movefunction::funcpage(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
