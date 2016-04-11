/****************************************************************************
** Meta object code from reading C++ file 'songline.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ktv/songline.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'songline.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_songline_t {
    QByteArrayData data[6];
    char stringdata[69];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_songline_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_songline_t qt_meta_stringdata_songline = {
    {
QT_MOC_LITERAL(0, 0, 8), // "songline"
QT_MOC_LITERAL(1, 9, 6), // "select"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 5), // "frist"
QT_MOC_LITERAL(4, 23, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(5, 45, 23) // "on_pushButton_2_clicked"

    },
    "songline\0select\0\0frist\0on_pushButton_clicked\0"
    "on_pushButton_2_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_songline[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       3,    1,   37,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   40,    2, 0x08 /* Private */,
       5,    0,   41,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void songline::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        songline *_t = static_cast<songline *>(_o);
        switch (_id) {
        case 0: _t->select((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->frist((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->on_pushButton_clicked(); break;
        case 3: _t->on_pushButton_2_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (songline::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&songline::select)) {
                *result = 0;
            }
        }
        {
            typedef void (songline::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&songline::frist)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject songline::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_songline.data,
      qt_meta_data_songline,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *songline::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *songline::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_songline.stringdata))
        return static_cast<void*>(const_cast< songline*>(this));
    return QWidget::qt_metacast(_clname);
}

int songline::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void songline::select(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void songline::frist(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
