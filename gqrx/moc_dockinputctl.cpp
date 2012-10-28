/****************************************************************************
** Meta object code from reading C++ file 'dockinputctl.h'
**
** Created: Sat Oct 13 16:18:55 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../gqrx/qtgui/dockinputctl.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dockinputctl.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DockInputCtl[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      19,   14,   13,   13, 0x05,
      45,   39,   13,   13, 0x05,
      75,   66,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
      96,   39,   13,   13, 0x08,
     131,   39,   13,   13, 0x08,
     171,  163,   13,   13, 0x08,
     199,   39,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_DockInputCtl[] = {
    "DockInputCtl\0\0gain\0gainChanged(double)\0"
    "value\0freqCorrChanged(int)\0freq_mhz\0"
    "lnbLoChanged(double)\0"
    "on_lnbSpinBox_valueChanged(double)\0"
    "on_gainSlider_valueChanged(int)\0checked\0"
    "on_gainButton_toggled(bool)\0"
    "on_freqCorrSpinBox_valueChanged(int)\0"
};

void DockInputCtl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DockInputCtl *_t = static_cast<DockInputCtl *>(_o);
        switch (_id) {
        case 0: _t->gainChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->freqCorrChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->lnbLoChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->on_lnbSpinBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->on_gainSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_gainButton_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->on_freqCorrSpinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData DockInputCtl::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DockInputCtl::staticMetaObject = {
    { &QDockWidget::staticMetaObject, qt_meta_stringdata_DockInputCtl,
      qt_meta_data_DockInputCtl, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DockInputCtl::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DockInputCtl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DockInputCtl::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DockInputCtl))
        return static_cast<void*>(const_cast< DockInputCtl*>(this));
    return QDockWidget::qt_metacast(_clname);
}

int DockInputCtl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDockWidget::qt_metacall(_c, _id, _a);
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
void DockInputCtl::gainChanged(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DockInputCtl::freqCorrChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DockInputCtl::lnbLoChanged(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
