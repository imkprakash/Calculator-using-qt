/****************************************************************************
** Meta object code from reading C++ file 'calculator.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Calculator/calculator.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'calculator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace {
struct qt_meta_stringdata_Calculator_t {
    uint offsetsAndSizes[18];
    char stringdata0[11];
    char stringdata1[11];
    char stringdata2[1];
    char stringdata3[18];
    char stringdata4[12];
    char stringdata5[17];
    char stringdata6[19];
    char stringdata7[21];
    char stringdata8[17];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_Calculator_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_Calculator_t qt_meta_stringdata_Calculator = {
    {
        QT_MOC_LITERAL(0, 10),  // "Calculator"
        QT_MOC_LITERAL(11, 10),  // "NumPressed"
        QT_MOC_LITERAL(22, 0),  // ""
        QT_MOC_LITERAL(23, 17),  // "MathButtonPressed"
        QT_MOC_LITERAL(41, 11),  // "EqualButton"
        QT_MOC_LITERAL(53, 16),  // "ChangeNumberSign"
        QT_MOC_LITERAL(70, 18),  // "ClearButtonPressed"
        QT_MOC_LITERAL(89, 20),  // "DecimalButtonPressed"
        QT_MOC_LITERAL(110, 16)   // "BackspacePressed"
    },
    "Calculator",
    "NumPressed",
    "",
    "MathButtonPressed",
    "EqualButton",
    "ChangeNumberSign",
    "ClearButtonPressed",
    "DecimalButtonPressed",
    "BackspacePressed"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_Calculator[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   56,    2, 0x08,    1 /* Private */,
       3,    0,   57,    2, 0x08,    2 /* Private */,
       4,    0,   58,    2, 0x08,    3 /* Private */,
       5,    0,   59,    2, 0x08,    4 /* Private */,
       6,    0,   60,    2, 0x08,    5 /* Private */,
       7,    0,   61,    2, 0x08,    6 /* Private */,
       8,    0,   62,    2, 0x08,    7 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject Calculator::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_Calculator.offsetsAndSizes,
    qt_meta_data_Calculator,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_Calculator_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Calculator, std::true_type>,
        // method 'NumPressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'MathButtonPressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'EqualButton'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ChangeNumberSign'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ClearButtonPressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'DecimalButtonPressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'BackspacePressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Calculator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Calculator *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->NumPressed(); break;
        case 1: _t->MathButtonPressed(); break;
        case 2: _t->EqualButton(); break;
        case 3: _t->ChangeNumberSign(); break;
        case 4: _t->ClearButtonPressed(); break;
        case 5: _t->DecimalButtonPressed(); break;
        case 6: _t->BackspacePressed(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *Calculator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Calculator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Calculator.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Calculator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
