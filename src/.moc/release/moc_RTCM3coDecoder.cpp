/****************************************************************************
** Meta object code from reading C++ file 'RTCM3coDecoder.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../RTCM3/RTCM3coDecoder.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RTCM3coDecoder.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_RTCM3coDecoder[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x05,
      52,   15,   15,   15, 0x05,
      88,   15,   15,   15, 0x05,
     124,   15,   15,   15, 0x05,
     162,   15,   15,   15, 0x05,
     194,  177,   15,   15, 0x05,
     228,  222,   15,   15, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_RTCM3coDecoder[] = {
    "RTCM3coDecoder\0\0newOrbCorrections(QList<t_orbCorr>)\0"
    "newClkCorrections(QList<t_clkCorr>)\0"
    "newCodeBiases(QList<t_satCodeBias>)\0"
    "newPhaseBiases(QList<t_satPhaseBias>)\0"
    "newTec(t_vTec)\0msg,showOnScreen\0"
    "newMessage(QByteArray,bool)\0staID\0"
    "providerIDChanged(QString)\0"
};

void RTCM3coDecoder::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        RTCM3coDecoder *_t = static_cast<RTCM3coDecoder *>(_o);
        switch (_id) {
        case 0: _t->newOrbCorrections((*reinterpret_cast< QList<t_orbCorr>(*)>(_a[1]))); break;
        case 1: _t->newClkCorrections((*reinterpret_cast< QList<t_clkCorr>(*)>(_a[1]))); break;
        case 2: _t->newCodeBiases((*reinterpret_cast< QList<t_satCodeBias>(*)>(_a[1]))); break;
        case 3: _t->newPhaseBiases((*reinterpret_cast< QList<t_satPhaseBias>(*)>(_a[1]))); break;
        case 4: _t->newTec((*reinterpret_cast< t_vTec(*)>(_a[1]))); break;
        case 5: _t->newMessage((*reinterpret_cast< QByteArray(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 6: _t->providerIDChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData RTCM3coDecoder::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject RTCM3coDecoder::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_RTCM3coDecoder,
      qt_meta_data_RTCM3coDecoder, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &RTCM3coDecoder::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *RTCM3coDecoder::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *RTCM3coDecoder::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_RTCM3coDecoder))
        return static_cast<void*>(const_cast< RTCM3coDecoder*>(this));
    if (!strcmp(_clname, "GPSDecoder"))
        return static_cast< GPSDecoder*>(const_cast< RTCM3coDecoder*>(this));
    return QObject::qt_metacast(_clname);
}

int RTCM3coDecoder::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void RTCM3coDecoder::newOrbCorrections(QList<t_orbCorr> _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void RTCM3coDecoder::newClkCorrections(QList<t_clkCorr> _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void RTCM3coDecoder::newCodeBiases(QList<t_satCodeBias> _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void RTCM3coDecoder::newPhaseBiases(QList<t_satPhaseBias> _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void RTCM3coDecoder::newTec(t_vTec _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void RTCM3coDecoder::newMessage(QByteArray _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void RTCM3coDecoder::providerIDChanged(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_END_MOC_NAMESPACE
