/****************************************************************************
** Meta object code from reading C++ file 'selectsongline.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ktv/selectsongline.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'selectsongline.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_selectsongline_t {
    QByteArrayData data[6];
    char stringdata[86];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_selectsongline_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_selectsongline_t qt_meta_stringdata_selectsongline = {
    {
QT_MOC_LITERAL(0, 0, 14), // "selectsongline"
QT_MOC_LITERAL(1, 15, 10), // "delonesong"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 12), // "fristonesong"
QT_MOC_LITERAL(4, 40, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(5, 62, 23) // "on_pushButton_2_clicked"

    },
    "selectsongline\0delonesong\0\0fristonesong\0"
    "on_pushButton_clicked\0on_pushButton_2_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_selectsongline[] = {

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

void selectsongline::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        selectsongline *_t = static_cast<selectsongline *>(_o);
        switch (_id) {
        case 0: _t->delonesong((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->fristonesong((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->on_pushButton_clicked(); break;
        case 3: _t->on_pushButton_2_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (selectsongline::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&selectsongline::delonesong)) {
                *result = 0;
            }
        }
        {
            typedef void (selectsongline::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&selectsongline::fristonesong)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject selectsongline::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_selectsongline.data,
      qt_meta_data_selectsongline,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *selectsongline::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *selectsongline::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_selectsongline.stringdata))
        return static_cast<void*>(const_cast< selectsongline*>(this));
    return QWidget::qt_metacast(_clname);
}

int selectsongline::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void selectsongline::delonesong(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void selectsongline::fristonesong(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
