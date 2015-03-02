/****************************************************************************
** Meta object code from reading C++ file 'segearwindow.h'
**
** Created: Mon Mar 2 20:59:51 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../segearwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'segearwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SegEarWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x08,
      41,   13,   13,   13, 0x08,
      66,   13,   13,   13, 0x08,
      91,   13,   13,   13, 0x08,
     115,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SegEarWindow[] = {
    "SegEarWindow\0\0on_pBDirImagenes_clicked()\0"
    "on_pBAntImagen_clicked()\0"
    "on_pBSigImagen_clicked()\0"
    "on_pBDetectar_clicked()\0"
    "on_pBGreatTruthFile_clicked()\0"
};

void SegEarWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SegEarWindow *_t = static_cast<SegEarWindow *>(_o);
        switch (_id) {
        case 0: _t->on_pBDirImagenes_clicked(); break;
        case 1: _t->on_pBAntImagen_clicked(); break;
        case 2: _t->on_pBSigImagen_clicked(); break;
        case 3: _t->on_pBDetectar_clicked(); break;
        case 4: _t->on_pBGreatTruthFile_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData SegEarWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SegEarWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_SegEarWindow,
      qt_meta_data_SegEarWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SegEarWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SegEarWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SegEarWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SegEarWindow))
        return static_cast<void*>(const_cast< SegEarWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int SegEarWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
