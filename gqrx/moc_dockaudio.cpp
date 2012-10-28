/****************************************************************************
** Meta object code from reading C++ file 'dockaudio.h'
**
** Created: Sat Oct 13 16:18:56 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../gqrx/qtgui/dockaudio.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dockaudio.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DockAudio[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: signature, parameters, type, tag, flags
      16,   11,   10,   10, 0x05,
      49,   40,   10,   10, 0x05,
      74,   10,   10,   10, 0x05,
      92,   40,   10,   10, 0x05,
     118,   10,   10,   10, 0x05,
     141,  137,   10,   10, 0x05,

 // slots: signature, parameters, type, tag, flags
     167,  161,   10,   10, 0x08,
     212,  204,   10,   10, 0x08,
     244,  204,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_DockAudio[] = {
    "DockAudio\0\0gain\0audioGainChanged(float)\0"
    "filename\0audioRecStarted(QString)\0"
    "audioRecStopped()\0audioPlayStarted(QString)\0"
    "audioPlayStopped()\0fps\0fftRateChanged(int)\0"
    "value\0on_audioGainSlider_valueChanged(int)\0"
    "checked\0on_audioRecButton_clicked(bool)\0"
    "on_audioPlayButton_clicked(bool)\0"
};

void DockAudio::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DockAudio *_t = static_cast<DockAudio *>(_o);
        switch (_id) {
        case 0: _t->audioGainChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 1: _t->audioRecStarted((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->audioRecStopped(); break;
        case 3: _t->audioPlayStarted((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->audioPlayStopped(); break;
        case 5: _t->fftRateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_audioGainSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_audioRecButton_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->on_audioPlayButton_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData DockAudio::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DockAudio::staticMetaObject = {
    { &QDockWidget::staticMetaObject, qt_meta_stringdata_DockAudio,
      qt_meta_data_DockAudio, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DockAudio::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DockAudio::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DockAudio::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DockAudio))
        return static_cast<void*>(const_cast< DockAudio*>(this));
    return QDockWidget::qt_metacast(_clname);
}

int DockAudio::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDockWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void DockAudio::audioGainChanged(float _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DockAudio::audioRecStarted(const QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DockAudio::audioRecStopped()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void DockAudio::audioPlayStarted(const QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void DockAudio::audioPlayStopped()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void DockAudio::fftRateChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE
