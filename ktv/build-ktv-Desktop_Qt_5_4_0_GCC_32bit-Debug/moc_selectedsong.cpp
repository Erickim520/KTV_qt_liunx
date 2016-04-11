/****************************************************************************
** Meta object code from reading C++ file 'selectedsong.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ktv/selectedsong.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'selectedsong.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_selectedsong_t {
    QByteArrayData data[13];
    char stringdata[202];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_selectedsong_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_selectedsong_t qt_meta_stringdata_selectedsong = {
    {
QT_MOC_LITERAL(0, 0, 12), // "selectedsong"
QT_MOC_LITERAL(1, 13, 12), // "hidemove_sig"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 14), // "delonesong_sig"
QT_MOC_LITERAL(4, 42, 16), // "fristonesong_sig"
QT_MOC_LITERAL(5, 59, 7), // "mixhave"
QT_MOC_LITERAL(6, 67, 4), // "disp"
QT_MOC_LITERAL(7, 72, 15), // "delonesong_slot"
QT_MOC_LITERAL(8, 88, 17), // "fristonesong_slot"
QT_MOC_LITERAL(9, 106, 23), // "on_pushButton_4_clicked"
QT_MOC_LITERAL(10, 130, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(11, 152, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(12, 176, 25) // "on_pushButton_mix_clicked"

    },
    "selectedsong\0hidemove_sig\0\0delonesong_sig\0"
    "fristonesong_sig\0mixhave\0disp\0"
    "delonesong_slot\0fristonesong_slot\0"
    "on_pushButton_4_clicked\0on_pushButton_clicked\0"
    "on_pushButton_2_clicked\0"
    "on_pushButton_mix_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_selectedsong[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,
       3,    1,   72,    2, 0x06 /* Public */,
       4,    1,   75,    2, 0x06 /* Public */,
       5,    0,   78,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   79,    2, 0x0a /* Public */,
       7,    1,   80,    2, 0x0a /* Public */,
       8,    1,   83,    2, 0x0a /* Public */,
       9,    0,   86,    2, 0x08 /* Private */,
      10,    0,   87,    2, 0x08 /* Private */,
      11,    0,   88,    2, 0x08 /* Private */,
      12,    0,   89,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void selectedsong::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        selectedsong *_t = static_cast<selectedsong *>(_o);
        switch (_id) {
        case 0: _t->hidemove_sig((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->delonesong_sig((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->fristonesong_sig((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->mixhave(); break;
        case 4: _t->disp(); break;
        case 5: _t->delonesong_slot((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->fristonesong_slot((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->on_pushButton_4_clicked(); break;
        case 8: _t->on_pushButton_clicked(); break;
        case 9: _t->on_pushButton_2_clicked(); break;
        case 10: _t->on_pushButton_mix_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (selectedsong::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&selectedsong::hidemove_sig)) {
                *result = 0;
            }
        }
        {
            typedef void (selectedsong::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&selectedsong::delonesong_sig)) {
                *result = 1;
            }
        }
        {
            typedef void (selectedsong::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&selectedsong::fristonesong_sig)) {
                *result = 2;
            }
        }
        {
            typedef void (selectedsong::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&selectedsong::mixhave)) {
                *result = 3;
            }
        }
    }
}

const QMetaObject selectedsong::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_selectedsong.data,
      qt_meta_data_selectedsong,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *selectedsong::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *selectedsong::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_selectedsong.stringdata))
        return static_cast<void*>(const_cast< selectedsong*>(this));
    return QFrame::qt_metacast(_clname);
}

int selectedsong::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void selectedsong::hidemove_sig(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void selectedsong::delonesong_sig(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void selectedsong::fristonesong_sig(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void selectedsong::mixhave()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
