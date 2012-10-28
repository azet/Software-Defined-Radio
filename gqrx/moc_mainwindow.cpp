/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created: Sat Oct 13 16:18:42 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../gqrx/applications/gqrx/mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      49,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      21,   12,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      52,   47,   11,   11, 0x0a,
      85,   76,   11,   11, 0x08,
     110,  102,   11,   11, 0x08,
     139,  134,   11,   11, 0x08,
     161,  157,   11,   11, 0x08,
     186,  178,   11,   11, 0x08,
     222,  211,   11,   11, 0x08,
     253,  247,   11,   11, 0x08,
     278,  270,   11,   11, 0x08,
     301,  297,   11,   11, 0x08,
     327,  319,   11,   11, 0x08,
     355,  348,   11,   11, 0x08,
     379,  370,   11,   11, 0x08,
     406,  396,   11,   11, 0x08,
     434,  427,   11,   11, 0x08,
     456,  451,   11,   11, 0x08,
     473,  134,   11,   11, 0x08,
     507,  489,   11,   11, 0x08,
     548,  539,   11,   11, 0x08,
     568,  134,   11,   11, 0x08,
     597,  588,   11,   11, 0x08,
     620,   11,   11,   11, 0x08,
     635,  588,   11,   11, 0x08,
     663,   11,   11,   11, 0x08,
     697,  683,   11,   11, 0x08,
     733,  728,   11,   11, 0x08,
     755,  751,   11,   11, 0x08,
     780,  773,   11,   11, 0x08,
     799,  751,   11,   11, 0x08,
     831,  820,   11,   11, 0x08,
     879,  870,   11,   11, 0x08,
     921,  913,   11,   11, 0x08,
     954,   11,  950,   11, 0x08,
     984,   11,   11,   11, 0x08,
    1018,   11,   11,   11, 0x08,
    1052,  913,   11,   11, 0x08,
    1083,  913,   11,   11, 0x08,
    1119,   11,   11,   11, 0x08,
    1149,   11,   11,   11, 0x08,
    1179,   11,   11,   11, 0x08,
    1210,   11,   11,   11, 0x08,
    1237,   11,   11,   11, 0x08,
    1266,   11,   11,   11, 0x08,
    1287,   11,   11,   11, 0x08,
    1308,   11,   11,   11, 0x08,
    1325,   11,   11,   11, 0x08,
    1340,   11,   11,   11, 0x08,
    1355,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0settings\0configChanged(QSettings*)\0"
    "freq\0setNewFrequency(qint64)\0freq_mhz\0"
    "setLnbLo(double)\0freq_hz\0"
    "setFilterOffset(qint64)\0gain\0"
    "setRfGain(double)\0ppm\0setFreqCorr(int)\0"
    "dci,dcq\0setDcCorr(double,double)\0"
    "gain,phase\0setIqCorr(double,double)\0"
    "index\0selectDemod(int)\0max_dev\0"
    "setFmMaxdev(float)\0tau\0setFmEmph(double)\0"
    "enabled\0setAmDcrStatus(bool)\0agc_on\0"
    "setAgcOn(bool)\0use_hang\0setAgcHang(bool)\0"
    "threshold\0setAgcThreshold(int)\0factor\0"
    "setAgcSlope(int)\0msec\0setAgcDecay(int)\0"
    "setAgcGain(int)\0nbid,on,threshold\0"
    "setNoiseBlanker(int,bool,float)\0"
    "level_db\0setSqlLevel(double)\0"
    "setAudioGain(float)\0filename\0"
    "startAudioRec(QString)\0stopAudioRec()\0"
    "startAudioPlayback(QString)\0"
    "stopAudioPlayback()\0play,filename\0"
    "toggleIqPlayback(bool,QString)\0size\0"
    "setIqFftSize(int)\0fps\0setIqFftRate(int)\0"
    "pct_wf\0setIqFftSplit(int)\0"
    "setAudioFftRate(int)\0freq,delta\0"
    "on_plotter_NewDemodFreq(qint64,qint64)\0"
    "low,high\0on_plotter_NewFilterFreq(int,int)\0"
    "checked\0on_actionDSP_triggered(bool)\0"
    "int\0on_actionIoConfig_triggered()\0"
    "on_actionLoadSettings_triggered()\0"
    "on_actionSaveSettings_triggered()\0"
    "on_actionIqRec_triggered(bool)\0"
    "on_actionFullScreen_triggered(bool)\0"
    "on_actionAFSK1200_triggered()\0"
    "on_actionBPSK1000_triggered()\0"
    "on_actionUserGroup_triggered()\0"
    "on_actionAbout_triggered()\0"
    "on_actionAboutQt_triggered()\0"
    "afsk1200win_closed()\0bpsk1000win_closed()\0"
    "decoderTimeout()\0meterTimeout()\0"
    "iqFftTimeout()\0audioFftTimeout()\0"
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->configChanged((*reinterpret_cast< QSettings*(*)>(_a[1]))); break;
        case 1: _t->setNewFrequency((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 2: _t->setLnbLo((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->setFilterOffset((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 4: _t->setRfGain((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->setFreqCorr((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->setDcCorr((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 7: _t->setIqCorr((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 8: _t->selectDemod((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->setFmMaxdev((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 10: _t->setFmEmph((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 11: _t->setAmDcrStatus((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->setAgcOn((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->setAgcHang((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->setAgcThreshold((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->setAgcSlope((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->setAgcDecay((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->setAgcGain((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: _t->setNoiseBlanker((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3]))); break;
        case 19: _t->setSqlLevel((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 20: _t->setAudioGain((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 21: _t->startAudioRec((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 22: _t->stopAudioRec(); break;
        case 23: _t->startAudioPlayback((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 24: _t->stopAudioPlayback(); break;
        case 25: _t->toggleIqPlayback((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 26: _t->setIqFftSize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 27: _t->setIqFftRate((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 28: _t->setIqFftSplit((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 29: _t->setAudioFftRate((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 30: _t->on_plotter_NewDemodFreq((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 31: _t->on_plotter_NewFilterFreq((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 32: _t->on_actionDSP_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 33: { int _r = _t->on_actionIoConfig_triggered();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 34: _t->on_actionLoadSettings_triggered(); break;
        case 35: _t->on_actionSaveSettings_triggered(); break;
        case 36: _t->on_actionIqRec_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 37: _t->on_actionFullScreen_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 38: _t->on_actionAFSK1200_triggered(); break;
        case 39: _t->on_actionBPSK1000_triggered(); break;
        case 40: _t->on_actionUserGroup_triggered(); break;
        case 41: _t->on_actionAbout_triggered(); break;
        case 42: _t->on_actionAboutQt_triggered(); break;
        case 43: _t->afsk1200win_closed(); break;
        case 44: _t->bpsk1000win_closed(); break;
        case 45: _t->decoderTimeout(); break;
        case 46: _t->meterTimeout(); break;
        case 47: _t->iqFftTimeout(); break;
        case 48: _t->audioFftTimeout(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MainWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 49)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 49;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::configChanged(QSettings * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
