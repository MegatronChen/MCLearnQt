/****************************************************************************
** Meta object code from reading C++ file 'qwmainwind.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.0.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Section2_4/qwmainwind.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qwmainwind.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.0.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QWMainWind_t {
    const uint offsetsAndSize[24];
    char stringdata0[207];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_QWMainWind_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_QWMainWind_t qt_meta_stringdata_QWMainWind = {
    {
QT_MOC_LITERAL(0, 10), // "QWMainWind"
QT_MOC_LITERAL(11, 24), // "on_actFontBold_triggered"
QT_MOC_LITERAL(36, 0), // ""
QT_MOC_LITERAL(37, 7), // "checked"
QT_MOC_LITERAL(45, 24), // "on_txtEdit_copyAvailable"
QT_MOC_LITERAL(70, 1), // "b"
QT_MOC_LITERAL(72, 27), // "on_txtEdit_selectionChanged"
QT_MOC_LITERAL(100, 26), // "on_actFontItalic_triggered"
QT_MOC_LITERAL(127, 31), // "on_spinBoxFontSize_valueChanged"
QT_MOC_LITERAL(159, 9), // "aFontSize"
QT_MOC_LITERAL(169, 32), // "on_comboFont_currentIndexChanged"
QT_MOC_LITERAL(202, 4) // "arg1"

    },
    "QWMainWind\0on_actFontBold_triggered\0"
    "\0checked\0on_txtEdit_copyAvailable\0b\0"
    "on_txtEdit_selectionChanged\0"
    "on_actFontItalic_triggered\0"
    "on_spinBoxFontSize_valueChanged\0"
    "aFontSize\0on_comboFont_currentIndexChanged\0"
    "arg1"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QWMainWind[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   50,    2, 0x08,    0 /* Private */,
       4,    1,   53,    2, 0x08,    2 /* Private */,
       6,    0,   56,    2, 0x08,    4 /* Private */,
       7,    0,   57,    2, 0x08,    5 /* Private */,
       8,    1,   58,    2, 0x08,    6 /* Private */,
      10,    1,   61,    2, 0x08,    8 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::QString,   11,

       0        // eod
};

void QWMainWind::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QWMainWind *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_actFontBold_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->on_txtEdit_copyAvailable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->on_txtEdit_selectionChanged(); break;
        case 3: _t->on_actFontItalic_triggered(); break;
        case 4: _t->on_spinBoxFontSize_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_comboFont_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject QWMainWind::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_QWMainWind.offsetsAndSize,
    qt_meta_data_QWMainWind,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_QWMainWind_t

, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>


>,
    nullptr
} };


const QMetaObject *QWMainWind::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QWMainWind::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QWMainWind.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int QWMainWind::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
