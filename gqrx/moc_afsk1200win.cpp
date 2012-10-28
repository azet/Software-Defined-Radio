/****************************************************************************
** Meta object code from reading C++ file 'afsk1200win.h'
**
** Created: Sat Oct 13 16:18:58 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../gqrx/qtgui/afsk1200win.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'afsk1200win.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Afsk1200Win[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
      28,   12,   12,   12, 0x08,
      55,   12,   12,   12, 0x08,
      81,   12,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Afsk1200Win[] = {
    "Afsk1200Win\0\0windowClosed()\0"
    "on_actionClear_triggered()\0"
    "on_actionSave_triggered()\0"
    "on_actionInfo_triggered()\0"
};

void Afsk1200Win::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Afsk1200Win *_t = static_cast<Afsk1200Win *>(_o);
        switch (_id) {
        case 0: _t->windowClosed(); break;
        case 1: _t->on_actionClear_triggered(); break;
        case 2: _t->on_actionSave_triggered(); break;
        case 3: _t->on_actionInfo_triggered(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Afsk1200Win::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Afsk1200Win::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Afsk1200Win,
      qt_meta_data_Afsk1200Win, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Afsk1200Win::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Afsk1200Win::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Afsk1200Win::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Afsk1200Win))
        return static_cast<void*>(const_cast< Afsk1200Win*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int Afsk1200Win::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
void Afsk1200Win::windowClosed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
