/****************************************************************************
** Meta object code from reading C++ file 'NekoDriver.h'
**
** Created: Sun Dec 30 07:18:44 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../NekoDriver.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'NekoDriver.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TNekoDriver[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      20,   13,   12,   12, 0x05,
      53,   50,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
      75,   13,   12,   12, 0x0a,
     107,   50,   12,   12, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_TNekoDriver[] = {
    "TNekoDriver\0\0buffer\0lcdBufferChanged(QByteArray*)\0"
    "pc\0stepFinished(quint16)\0"
    "onLCDBufferChanged(QByteArray*)\0"
    "onStepFinished(quint16)\0"
};

void TNekoDriver::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TNekoDriver *_t = static_cast<TNekoDriver *>(_o);
        switch (_id) {
        case 0: _t->lcdBufferChanged((*reinterpret_cast< QByteArray*(*)>(_a[1]))); break;
        case 1: _t->stepFinished((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 2: _t->onLCDBufferChanged((*reinterpret_cast< QByteArray*(*)>(_a[1]))); break;
        case 3: _t->onStepFinished((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData TNekoDriver::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject TNekoDriver::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_TNekoDriver,
      qt_meta_data_TNekoDriver, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TNekoDriver::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TNekoDriver::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TNekoDriver::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TNekoDriver))
        return static_cast<void*>(const_cast< TNekoDriver*>(this));
    return QObject::qt_metacast(_clname);
}

int TNekoDriver::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void TNekoDriver::lcdBufferChanged(QByteArray * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TNekoDriver::stepFinished(quint16 _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
static const uint qt_meta_data_EmulatorThread[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      23,   16,   15,   15, 0x05,
      56,   53,   15,   15, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_EmulatorThread[] = {
    "EmulatorThread\0\0buffer\0"
    "lcdBufferChanged(QByteArray*)\0pc\0"
    "stepFinished(quint16)\0"
};

void EmulatorThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        EmulatorThread *_t = static_cast<EmulatorThread *>(_o);
        switch (_id) {
        case 0: _t->lcdBufferChanged((*reinterpret_cast< QByteArray*(*)>(_a[1]))); break;
        case 1: _t->stepFinished((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData EmulatorThread::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject EmulatorThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_EmulatorThread,
      qt_meta_data_EmulatorThread, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &EmulatorThread::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *EmulatorThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *EmulatorThread::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_EmulatorThread))
        return static_cast<void*>(const_cast< EmulatorThread*>(this));
    return QThread::qt_metacast(_clname);
}

int EmulatorThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void EmulatorThread::lcdBufferChanged(QByteArray * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void EmulatorThread::stepFinished(quint16 _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE