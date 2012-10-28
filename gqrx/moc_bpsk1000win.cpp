/****************************************************************************
** Meta object code from reading C++ file 'bpsk1000win.h'
**
** Created: Sat Oct 13 16:18:58 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../gqrx/qtgui/bpsk1000win.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bpsk1000win.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Bpsk1000Win[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
      37,   28,   12,   12, 0x08,
      79,   12,   12,   12, 0x08,
      95,   12,   12,   12, 0x08,
     118,  112,   12,   12, 0x08,
     143,  139,   12,   12, 0x08,
     178,   12,   12,   12, 0x08,
     205,   12,   12,   12, 0x08,
     231,   12,   12,   12, 0x08,
     257,   12,   12,   12, 0x08,
     291,  283,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Bpsk1000Win[] = {
    "Bpsk1000Win\0\0windowClosed()\0newState\0"
    "demodStateChanged(QProcess::ProcessState)\0"
    "readDemodData()\0readDemodDebug()\0index\0"
    "profileSelected(int)\0row\0"
    "on_listView_currentRowChanged(int)\0"
    "on_actionClear_triggered()\0"
    "on_actionOpen_triggered()\0"
    "on_actionSave_triggered()\0"
    "on_actionInfo_triggered()\0checked\0"
    "on_actionRealtime_triggered(bool)\0"
};

void Bpsk1000Win::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Bpsk1000Win *_t = static_cast<Bpsk1000Win *>(_o);
        switch (_id) {
        case 0: _t->windowClosed(); break;
        case 1: _t->demodStateChanged((*reinterpret_cast< QProcess::ProcessState(*)>(_a[1]))); break;
        case 2: _t->readDemodData(); break;
        case 3: _t->readDemodDebug(); break;
        case 4: _t->profileSelected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_listView_currentRowChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_actionClear_triggered(); break;
        case 7: _t->on_actionOpen_triggered(); break;
        case 8: _t->on_actionSave_triggered(); break;
        case 9: _t->on_actionInfo_triggered(); break;
        case 10: _t->on_actionRealtime_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Bpsk1000Win::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Bpsk1000Win::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Bpsk1000Win,
      qt_meta_data_Bpsk1000Win, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Bpsk1000Win::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Bpsk1000Win::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Bpsk1000Win::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Bpsk1000Win))
        return static_cast<void*>(const_cast< Bpsk1000Win*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int Bpsk1000Win::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void Bpsk1000Win::windowClosed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
