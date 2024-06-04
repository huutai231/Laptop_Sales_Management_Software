/****************************************************************************
** Meta object code from reading C++ file 'quanly.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../QuanLyBanHang/quanly.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'quanly.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSQuanLyENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQuanLyENDCLASS = QtMocHelpers::stringData(
    "QuanLy",
    "on_EXIT_BUTTON_clicked",
    "",
    "on_LSGD_BUTTON_clicked",
    "on_TTKTN_BUTTON_clicked",
    "on_DMK_BUTTON_clicked",
    "on_CSSP_BUTTON_clicked",
    "on_XKH_BUTTON_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQuanLyENDCLASS_t {
    uint offsetsAndSizes[16];
    char stringdata0[7];
    char stringdata1[23];
    char stringdata2[1];
    char stringdata3[23];
    char stringdata4[24];
    char stringdata5[22];
    char stringdata6[23];
    char stringdata7[22];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQuanLyENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQuanLyENDCLASS_t qt_meta_stringdata_CLASSQuanLyENDCLASS = {
    {
        QT_MOC_LITERAL(0, 6),  // "QuanLy"
        QT_MOC_LITERAL(7, 22),  // "on_EXIT_BUTTON_clicked"
        QT_MOC_LITERAL(30, 0),  // ""
        QT_MOC_LITERAL(31, 22),  // "on_LSGD_BUTTON_clicked"
        QT_MOC_LITERAL(54, 23),  // "on_TTKTN_BUTTON_clicked"
        QT_MOC_LITERAL(78, 21),  // "on_DMK_BUTTON_clicked"
        QT_MOC_LITERAL(100, 22),  // "on_CSSP_BUTTON_clicked"
        QT_MOC_LITERAL(123, 21)   // "on_XKH_BUTTON_clicked"
    },
    "QuanLy",
    "on_EXIT_BUTTON_clicked",
    "",
    "on_LSGD_BUTTON_clicked",
    "on_TTKTN_BUTTON_clicked",
    "on_DMK_BUTTON_clicked",
    "on_CSSP_BUTTON_clicked",
    "on_XKH_BUTTON_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQuanLyENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x08,    1 /* Private */,
       3,    0,   51,    2, 0x08,    2 /* Private */,
       4,    0,   52,    2, 0x08,    3 /* Private */,
       5,    0,   53,    2, 0x08,    4 /* Private */,
       6,    0,   54,    2, 0x08,    5 /* Private */,
       7,    0,   55,    2, 0x08,    6 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject QuanLy::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSQuanLyENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQuanLyENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQuanLyENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QuanLy, std::true_type>,
        // method 'on_EXIT_BUTTON_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_LSGD_BUTTON_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_TTKTN_BUTTON_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_DMK_BUTTON_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_CSSP_BUTTON_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_XKH_BUTTON_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void QuanLy::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QuanLy *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_EXIT_BUTTON_clicked(); break;
        case 1: _t->on_LSGD_BUTTON_clicked(); break;
        case 2: _t->on_TTKTN_BUTTON_clicked(); break;
        case 3: _t->on_DMK_BUTTON_clicked(); break;
        case 4: _t->on_CSSP_BUTTON_clicked(); break;
        case 5: _t->on_XKH_BUTTON_clicked(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *QuanLy::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QuanLy::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQuanLyENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int QuanLy::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
