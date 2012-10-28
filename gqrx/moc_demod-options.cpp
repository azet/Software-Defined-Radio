/****************************************************************************
** Meta object code from reading C++ file 'demod-options.h'
**
** Created: Sat Oct 13 16:19:00 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../gqrx/qtgui/demod-options.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'demod-options.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CDemodOptions[] = {

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
      23,   15,   14,   14, 0x05,
      51,   47,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
      80,   74,   14,   14, 0x08,
     113,   74,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CDemodOptions[] = {
    "CDemodOptions\0\0max_dev\0fmMaxdevSelected(float)\0"
    "tau\0fmEmphSelected(double)\0index\0"
    "on_maxdevSelector_activated(int)\0"
    "on_emphSelector_activated(int)\0"
};

void CDemodOptions::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CDemodOptions *_t = static_cast<CDemodOptions *>(_o);
        switch (_id) {
        case 0: _t->fmMaxdevSelected((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 1: _t->fmEmphSelected((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->on_maxdevSelector_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_emphSelector_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CDemodOptions::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CDemodOptions::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CDemodOptions,
      qt_meta_data_CDemodOptions, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CDemodOptions::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CDemodOptions::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CDemodOptions::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CDemodOptions))
        return static_cast<void*>(const_cast< CDemodOptions*>(this));
    return QDialog::qt_metacast(_clname);
}

int CDemodOptions::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
void CDemodOptions::fmMaxdevSelected(float _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CDemodOptions::fmEmphSelected(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
