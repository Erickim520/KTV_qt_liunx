/****************************************************************************
** Meta object code from reading C++ file 'data_db.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ktv/data_db.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'data_db.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_data_db_t {
    QByteArrayData data[14];
    char stringdata[166];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_data_db_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_data_db_t qt_meta_stringdata_data_db = {
    {
QT_MOC_LITERAL(0, 0, 7), // "data_db"
QT_MOC_LITERAL(1, 8, 7), // "finshed"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 13), // "finshedsonger"
QT_MOC_LITERAL(4, 31, 10), // "finshserch"
QT_MOC_LITERAL(5, 42, 20), // "finishserachluaguage"
QT_MOC_LITERAL(6, 63, 15), // "finisherachtype"
QT_MOC_LITERAL(7, 79, 17), // "finishserachtimes"
QT_MOC_LITERAL(8, 97, 15), // "search_songname"
QT_MOC_LITERAL(9, 113, 13), // "search_songer"
QT_MOC_LITERAL(10, 127, 12), // "songerchooes"
QT_MOC_LITERAL(11, 140, 8), // "luaguage"
QT_MOC_LITERAL(12, 149, 9), // "musictype"
QT_MOC_LITERAL(13, 159, 6) // "ranked"

    },
    "data_db\0finshed\0\0finshedsonger\0"
    "finshserch\0finishserachluaguage\0"
    "finisherachtype\0finishserachtimes\0"
    "search_songname\0search_songer\0"
    "songerchooes\0luaguage\0musictype\0ranked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_data_db[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x06 /* Public */,
       3,    0,   75,    2, 0x06 /* Public */,
       4,    0,   76,    2, 0x06 /* Public */,
       5,    0,   77,    2, 0x06 /* Public */,
       6,    0,   78,    2, 0x06 /* Public */,
       7,    0,   79,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   80,    2, 0x0a /* Public */,
       9,    0,   83,    2, 0x0a /* Public */,
      10,    1,   84,    2, 0x0a /* Public */,
      11,    1,   87,    2, 0x0a /* Public */,
      12,    1,   90,    2, 0x0a /* Public */,
      13,    0,   93,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,

       0        // eod
};

void data_db::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        data_db *_t = static_cast<data_db *>(_o);
        switch (_id) {
        case 0: _t->finshed(); break;
        case 1: _t->finshedsonger(); break;
        case 2: _t->finshserch(); break;
        case 3: _t->finishserachluaguage(); break;
        case 4: _t->finisherachtype(); break;
        case 5: _t->finishserachtimes(); break;
        case 6: _t->search_songname((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->search_songer(); break;
        case 8: _t->songerchooes((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->luaguage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->musictype((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 11: _t->ranked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (data_db::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&data_db::finshed)) {
                *result = 0;
            }
        }
        {
            typedef void (data_db::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&data_db::finshedsonger)) {
                *result = 1;
            }
        }
        {
            typedef void (data_db::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&data_db::finshserch)) {
                *result = 2;
            }
        }
        {
            typedef void (data_db::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&data_db::finishserachluaguage)) {
                *result = 3;
            }
        }
        {
            typedef void (data_db::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&data_db::finisherachtype)) {
                *result = 4;
            }
        }
        {
            typedef void (data_db::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&data_db::finishserachtimes)) {
                *result = 5;
            }
        }
    }
}

const QMetaObject data_db::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_data_db.data,
      qt_meta_data_data_db,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *data_db::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *data_db::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_data_db.stringdata))
        return static_cast<void*>(const_cast< data_db*>(this));
    return QObject::qt_metacast(_clname);
}

int data_db::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void data_db::finshed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void data_db::finshedsonger()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void data_db::finshserch()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void data_db::finishserachluaguage()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void data_db::finisherachtype()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void data_db::finishserachtimes()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
