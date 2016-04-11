/****************************************************************************
** Meta object code from reading C++ file 'mplayer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ktv/mplayer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mplayer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_mplayer_t {
    QByteArrayData data[14];
    char stringdata[124];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mplayer_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mplayer_t qt_meta_stringdata_mplayer = {
    {
QT_MOC_LITERAL(0, 0, 7), // "mplayer"
QT_MOC_LITERAL(1, 8, 10), // "pleasenext"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 7), // "beginMV"
QT_MOC_LITERAL(4, 28, 9), // "moveslior"
QT_MOC_LITERAL(5, 38, 8), // "readinfo"
QT_MOC_LITERAL(6, 47, 8), // "nextsong"
QT_MOC_LITERAL(7, 56, 7), // "restart"
QT_MOC_LITERAL(8, 64, 9), // "volumeadd"
QT_MOC_LITERAL(9, 74, 9), // "volumedel"
QT_MOC_LITERAL(10, 84, 7), // "vocaled"
QT_MOC_LITERAL(11, 92, 10), // "originaled"
QT_MOC_LITERAL(12, 103, 6), // "stoped"
QT_MOC_LITERAL(13, 110, 13) // "pleasenextone"

    },
    "mplayer\0pleasenext\0\0beginMV\0moveslior\0"
    "readinfo\0nextsong\0restart\0volumeadd\0"
    "volumedel\0vocaled\0originaled\0stoped\0"
    "pleasenextone"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mplayer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   75,    2, 0x0a /* Public */,
       4,    0,   78,    2, 0x0a /* Public */,
       5,    0,   79,    2, 0x0a /* Public */,
       6,    1,   80,    2, 0x0a /* Public */,
       7,    1,   83,    2, 0x0a /* Public */,
       8,    0,   86,    2, 0x0a /* Public */,
       9,    0,   87,    2, 0x0a /* Public */,
      10,    0,   88,    2, 0x0a /* Public */,
      11,    0,   89,    2, 0x0a /* Public */,
      12,    0,   90,    2, 0x0a /* Public */,
      13,    0,   91,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void mplayer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        mplayer *_t = static_cast<mplayer *>(_o);
        switch (_id) {
        case 0: _t->pleasenext(); break;
        case 1: _t->beginMV((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->moveslior(); break;
        case 3: _t->readinfo(); break;
        case 4: _t->nextsong((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->restart((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->volumeadd(); break;
        case 7: _t->volumedel(); break;
        case 8: _t->vocaled(); break;
        case 9: _t->originaled(); break;
        case 10: _t->stoped(); break;
        case 11: _t->pleasenextone(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (mplayer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&mplayer::pleasenext)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject mplayer::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_mplayer.data,
      qt_meta_data_mplayer,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *mplayer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mplayer::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_mplayer.stringdata))
        return static_cast<void*>(const_cast< mplayer*>(this));
    return QWidget::qt_metacast(_clname);
}

int mplayer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void mplayer::pleasenext()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
