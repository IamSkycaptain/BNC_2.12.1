/****************************************************************************
** Meta object code from reading C++ file 'bncmapwin.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../map/bncmapwin.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bncmapwin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_bncMapWin[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x05,

 // slots: signature, parameters, type, tag, flags
      37,   23,   10,   10, 0x0a,
      94,   89,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_bncMapWin[] = {
    "bncMapWin\0\0mapClosed()\0staID,time,xx\0"
    "slotNewPosition(QByteArray,bncTime,QVector<double>)\0"
    "isOk\0slotInitMap(bool)\0"
};

void bncMapWin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        bncMapWin *_t = static_cast<bncMapWin *>(_o);
        switch (_id) {
        case 0: _t->mapClosed(); break;
        case 1: _t->slotNewPosition((*reinterpret_cast< QByteArray(*)>(_a[1])),(*reinterpret_cast< bncTime(*)>(_a[2])),(*reinterpret_cast< QVector<double>(*)>(_a[3]))); break;
        case 2: _t->slotInitMap((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData bncMapWin::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject bncMapWin::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_bncMapWin,
      qt_meta_data_bncMapWin, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &bncMapWin::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *bncMapWin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *bncMapWin::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_bncMapWin))
        return static_cast<void*>(const_cast< bncMapWin*>(this));
    return QDialog::qt_metacast(_clname);
}

int bncMapWin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void bncMapWin::mapClosed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
