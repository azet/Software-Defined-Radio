/****************************************************************************
** Meta object code from reading C++ file 'dockrxopt.h'
**
** Created: Sat Oct 13 16:18:57 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../gqrx/qtgui/dockrxopt.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dockrxopt.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DockRxOpt[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      32,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      14,       // signalCount

 // signals: signature, parameters, type, tag, flags
      19,   11,   10,   10, 0x05,
      53,   47,   10,   10, 0x05,
      80,   72,   10,   10, 0x05,
     108,  104,   10,   10, 0x05,
     139,  131,   10,   10, 0x05,
     163,  158,   10,   10, 0x05,
     190,  184,   10,   10, 0x05,
     221,  214,   10,   10, 0x05,
     247,  238,   10,   10, 0x05,
     274,  268,   10,   10, 0x05,
     305,  299,   10,   10, 0x05,
     332,  326,   10,   10, 0x05,
     353,  158,   10,   10, 0x05,
     391,  373,   10,   10, 0x05,

 // slots: signature, parameters, type, tag, flags
     432,  427,   10,   10, 0x08,
     473,  467,   10,   10, 0x08,
     503,   10,   10,   10, 0x08,
     529,  467,   10,   10, 0x08,
     560,   10,   10,   10, 0x08,
     584,  467,   10,   10, 0x08,
     625,  617,   10,   10, 0x08,
     656,  268,   10,   10, 0x08,
     689,  268,   10,   10, 0x08,
     727,  268,   10,   10, 0x08,
     761,  268,   10,   10, 0x08,
     795,  268,   10,   10, 0x08,
     826,  617,   10,   10, 0x08,
     853,  617,   10,   10, 0x08,
     880,  268,   10,   10, 0x08,
     917,  268,   10,   10, 0x08,
     954,   72,   10,   10, 0x08,
     987,  104,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_DockRxOpt[] = {
    "DockRxOpt\0\0freq_hz\0filterOffsetChanged(qint64)\0"
    "demod\0demodSelected(int)\0max_dev\0"
    "fmMaxdevSelected(float)\0tau\0"
    "fmEmphSelected(double)\0enabled\0"
    "amDcrToggled(bool)\0gain\0bbGainChanged(float)\0"
    "level\0sqlLevelChanged(double)\0agc_on\0"
    "agcToggled(bool)\0use_hang\0"
    "agcHangToggled(bool)\0value\0"
    "agcThresholdChanged(int)\0slope\0"
    "agcSlopeChanged(int)\0decay\0"
    "agcDecayChanged(int)\0agcGainChanged(int)\0"
    "nbid,on,threshold\0noiseBlankerChanged(int,bool,float)\0"
    "freq\0on_filterFreq_NewFrequency(qint64)\0"
    "index\0on_filterCombo_activated(int)\0"
    "on_filterButton_clicked()\0"
    "on_modeSelector_activated(int)\0"
    "on_modeButton_clicked()\0"
    "on_agcPresetCombo_activated(int)\0"
    "checked\0on_agcHangButton_toggled(bool)\0"
    "on_agcGainDial_valueChanged(int)\0"
    "on_agcThresholdDial_valueChanged(int)\0"
    "on_agcSlopeDial_valueChanged(int)\0"
    "on_agcDecayDial_valueChanged(int)\0"
    "on_sqlSlider_valueChanged(int)\0"
    "on_nb1Button_toggled(bool)\0"
    "on_nb2Button_toggled(bool)\0"
    "on_nb1Threshold_valueChanged(double)\0"
    "on_nb2Threshold_valueChanged(double)\0"
    "demodOpt_fmMaxdevSelected(float)\0"
    "demodOpt_fmEmphSelected(double)\0"
};

void DockRxOpt::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DockRxOpt *_t = static_cast<DockRxOpt *>(_o);
        switch (_id) {
        case 0: _t->filterOffsetChanged((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 1: _t->demodSelected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->fmMaxdevSelected((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 3: _t->fmEmphSelected((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->amDcrToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->bbGainChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 6: _t->sqlLevelChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 7: _t->agcToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->agcHangToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->agcThresholdChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->agcSlopeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->agcDecayChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->agcGainChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->noiseBlankerChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3]))); break;
        case 14: _t->on_filterFreq_NewFrequency((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 15: _t->on_filterCombo_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->on_filterButton_clicked(); break;
        case 17: _t->on_modeSelector_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: _t->on_modeButton_clicked(); break;
        case 19: _t->on_agcPresetCombo_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: _t->on_agcHangButton_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 21: _t->on_agcGainDial_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 22: _t->on_agcThresholdDial_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 23: _t->on_agcSlopeDial_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 24: _t->on_agcDecayDial_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 25: _t->on_sqlSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 26: _t->on_nb1Button_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 27: _t->on_nb2Button_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 28: _t->on_nb1Threshold_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 29: _t->on_nb2Threshold_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 30: _t->demodOpt_fmMaxdevSelected((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 31: _t->demodOpt_fmEmphSelected((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData DockRxOpt::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DockRxOpt::staticMetaObject = {
    { &QDockWidget::staticMetaObject, qt_meta_stringdata_DockRxOpt,
      qt_meta_data_DockRxOpt, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DockRxOpt::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DockRxOpt::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DockRxOpt::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DockRxOpt))
        return static_cast<void*>(const_cast< DockRxOpt*>(this));
    return QDockWidget::qt_metacast(_clname);
}

int DockRxOpt::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDockWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 32)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 32;
    }
    return _id;
}

// SIGNAL 0
void DockRxOpt::filterOffsetChanged(qint64 _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DockRxOpt::demodSelected(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DockRxOpt::fmMaxdevSelected(float _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void DockRxOpt::fmEmphSelected(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void DockRxOpt::amDcrToggled(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void DockRxOpt::bbGainChanged(float _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void DockRxOpt::sqlLevelChanged(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void DockRxOpt::agcToggled(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void DockRxOpt::agcHangToggled(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void DockRxOpt::agcThresholdChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void DockRxOpt::agcSlopeChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void DockRxOpt::agcDecayChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void DockRxOpt::agcGainChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void DockRxOpt::noiseBlankerChanged(int _t1, bool _t2, float _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}
QT_END_MOC_NAMESPACE
