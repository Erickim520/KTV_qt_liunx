/****************************************************************************
** Meta object code from reading C++ file 'songlist.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ktv/songlist.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'songlist.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_songlist_t {
    QByteArrayData data[9];
    char stringdata[105];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_songlist_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_songlist_t qt_meta_stringdata_songlist = {
    {
QT_MOC_LITERAL(0, 0, 8), // "songlist"
QT_MOC_LITERAL(1, 9, 11), // "giveselects"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 10), // "givefrists"
QT_MOC_LITERAL(4, 33, 4), // "disp"
QT_MOC_LITERAL(5, 38, 10), // "giveselect"
QT_MOC_LITERAL(6, 49, 9), // "givefrist"
QT_MOC_LITERAL(7, 59, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(8, 81, 23) // "on_pushButton_clicked_2"

    },
    "songlist\0giveselects\0\0givefrists\0disp\0"
    "giveselect\0givefrist\0on_pushButton_clicked\0"
    "on_pushButton_clicked_2"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_songlist[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       3,    1,   52,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   55,    2, 0x0a /* Public */,
       5,    1,   56,    2, 0x0a /* Public */,
       6,    1,   59,    2, 0x0a /* Public */,
       7,    0,   62,    2, 0x08 /* Private */,
       8,    0,   63,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void songlist::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        songlist *_t = static_cast<songlist *>(_o);
        switch (_id) {
        case 0: _t->giveselects((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->givefrists((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->disp(); break;
        case 3: _t->giveselect((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->givefrist((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->on_pushButton_clicked(); break;
        case 6: _t->on_pushButton_clicked_2(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (songlist::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&songlist::giveselects)) {
                *result = 0;
            }
        }
        {
            typedef void (songlist::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&songlist::givefrists)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject songlist::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_songlist.data,
      qt_meta_data_songlist,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *songlist::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *songlist::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_songlist.stringdata))
        return static_cast<void*>(const_cast< songlist*>(this));
    return QFrame::qt_metacast(_clname);
}

int songlist::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void songlist::giveselects(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void songlist::givefrists(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
