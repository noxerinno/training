/****************************************************************************
** Meta object code from reading C++ file 'MaFrenetre.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Test/MaFrenetre.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MaFrenetre.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MaFrenetre[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      42,   32,   11,   11, 0x0a,
      64,   11,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_MaFrenetre[] = {
    "MaFrenetre\0\0agrandissementMax()\0"
    "dimension\0changerDimension(int)\0"
    "ouvrirDialogue()\0"
};

void MaFrenetre::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MaFrenetre *_t = static_cast<MaFrenetre *>(_o);
        switch (_id) {
        case 0: _t->agrandissementMax(); break;
        case 1: _t->changerDimension((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->ouvrirDialogue(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MaFrenetre::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MaFrenetre::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_MaFrenetre,
      qt_meta_data_MaFrenetre, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MaFrenetre::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MaFrenetre::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MaFrenetre::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MaFrenetre))
        return static_cast<void*>(const_cast< MaFrenetre*>(this));
    return QWidget::qt_metacast(_clname);
}

int MaFrenetre::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void MaFrenetre::agrandissementMax()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
