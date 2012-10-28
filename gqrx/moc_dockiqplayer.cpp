/****************************************************************************
** Meta object code from reading C++ file 'dockiqplayer.h'
**
** Created: Sat Oct 13 16:18:57 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../gqrx/qtgui/dockiqplayer.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dockiqplayer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DockIqPlayer[] = {

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
      23,   14,   13,   13, 0x05,
      57,   43,   13,   13, 0x05,
      95,   87,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
     111,   13,   13,   13, 0x08,
     143,  135,   13,   13, 0x08,
     175,  171,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_DockIqPlayer[] = {
    "DockIqPlayer\0\0filename\0fileOpened(QString)\0"
    "play,filename\0playbackToggled(bool,QString)\0"
    "new_pos\0posChanged(int)\0on_openButton_clicked()\0"
    "checked\0on_playButton_clicked(bool)\0"
    "pos\0on_seekSlider_valueChanged(int)\0"
};

void DockIqPlayer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DockIqPlayer *_t = static_cast<DockIqPlayer *>(_o);
        switch (_id) {
        case 0: _t->fileOpened((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->playbackToggled((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: _t->posChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_openButton_clicked(); break;
        case 4: _t->on_playButton_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->on_seekSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData DockIqPlayer::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DockIqPlayer::staticMetaObject = {
    { &QDockWidget::staticMetaObject, qt_meta_stringdata_DockIqPlayer,
      qt_meta_data_DockIqPlayer, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DockIqPlayer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DockIqPlayer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DockIqPlayer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DockIqPlayer))
        return static_cast<void*>(const_cast< DockIqPlayer*>(this));
    return QDockWidget::qt_metacast(_clname);
}

int DockIqPlayer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void DockIqPlayer::fileOpened(const QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DockIqPlayer::playbackToggled(bool _t1, const QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DockIqPlayer::posChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
