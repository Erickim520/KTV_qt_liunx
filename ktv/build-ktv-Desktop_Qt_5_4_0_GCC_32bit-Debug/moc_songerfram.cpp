/****************************************************************************
** Meta object code from reading C++ file 'songerfram.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ktv/songerfram.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'songerfram.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_songerfram_t {
    QByteArrayData data[10];
    char stringdata[129];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_songerfram_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_songerfram_t qt_meta_stringdata_songerfram = {
    {
QT_MOC_LITERAL(0, 0, 10), // "songerfram"
QT_MOC_LITERAL(1, 11, 9), // "onepeople"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 10), // "GrupButton"
QT_MOC_LITERAL(4, 33, 16), // "QAbstractButton*"
QT_MOC_LITERAL(5, 50, 10), // "dispsonger"
QT_MOC_LITERAL(6, 61, 4), // "work"
QT_MOC_LITERAL(7, 66, 14), // "QNetworkReply*"
QT_MOC_LITERAL(8, 81, 23), // "on_pushButton_7_clicked"
QT_MOC_LITERAL(9, 105, 23) // "on_pushButton_9_clicked"

    },
    "songerfram\0onepeople\0\0GrupButton\0"
    "QAbstractButton*\0dispsonger\0work\0"
    "QNetworkReply*\0on_pushButton_7_clicked\0"
    "on_pushButton_9_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_songerfram[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   47,    2, 0x0a /* Public */,
       5,    0,   50,    2, 0x0a /* Public */,
       6,    1,   51,    2, 0x0a /* Public */,
       8,    0,   54,    2, 0x08 /* Private */,
       9,    0,   55,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void songerfram::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        songerfram *_t = static_cast<songerfram *>(_o);
        switch (_id) {
        case 0: _t->onepeople((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->GrupButton((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        case 2: _t->dispsonger(); break;
        case 3: _t->work((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 4: _t->on_pushButton_7_clicked(); break;
        case 5: _t->on_pushButton_9_clicked(); break;
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
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (songerfram::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&songerfram::onepeople)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject songerfram::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_songerfram.data,
      qt_meta_data_songerfram,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *songerfram::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *songerfram::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_songerfram.stringdata))
        return static_cast<void*>(const_cast< songerfram*>(this));
    return QFrame::qt_metacast(_clname);
}

int songerfram::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void songerfram::onepeople(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
