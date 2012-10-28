/****************************************************************************
** Meta object code from reading C++ file 'dockfft.h'
**
** Created: Sat Oct 13 16:18:56 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../gqrx/qtgui/dockfft.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dockfft.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DockFft[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,    9,    8,    8, 0x05,
      38,   34,    8,    8, 0x05,
      62,   58,    8,    8, 0x05,

 // slots: signature, parameters, type, tag, flags
      88,   83,    8,    8, 0x08,
     136,   83,    8,    8, 0x08,
     190,  184,    8,    8, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_DockFft[] = {
    "DockFft\0\0size\0fftSizeChanged(int)\0fps\0"
    "fftRateChanged(int)\0pct\0fftSplitChanged(int)\0"
    "text\0on_fftSizeComboBox_currentIndexChanged(QString)\0"
    "on_fftRateComboBox_currentIndexChanged(QString)\0"
    "value\0on_fftSplitSlider_valueChanged(int)\0"
};

void DockFft::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DockFft *_t = static_cast<DockFft *>(_o);
        switch (_id) {
        case 0: _t->fftSizeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->fftRateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->fftSplitChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_fftSizeComboBox_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->on_fftRateComboBox_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->on_fftSplitSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData DockFft::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DockFft::staticMetaObject = {
    { &QDockWidget::staticMetaObject, qt_meta_stringdata_DockFft,
      qt_meta_data_DockFft, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DockFft::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DockFft::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DockFft::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DockFft))
        return static_cast<void*>(const_cast< DockFft*>(this));
    return QDockWidget::qt_metacast(_clname);
}

int DockFft::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDockWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void DockFft::fftSizeChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DockFft::fftRateChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DockFft::fftSplitChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
