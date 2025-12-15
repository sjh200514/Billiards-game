/****************************************************************************
** Meta object code from reading C++ file 'undocommands.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../UndoCommand/undocommands.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'undocommands.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.3. It"
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
struct qt_meta_stringdata_CLASSUndoCommandBaseENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSUndoCommandBaseENDCLASS = QtMocHelpers::stringData(
    "UndoCommandBase"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSUndoCommandBaseENDCLASS_t {
    uint offsetsAndSizes[2];
    char stringdata0[16];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSUndoCommandBaseENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSUndoCommandBaseENDCLASS_t qt_meta_stringdata_CLASSUndoCommandBaseENDCLASS = {
    {
        QT_MOC_LITERAL(0, 15)   // "UndoCommandBase"
    },
    "UndoCommandBase"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSUndoCommandBaseENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

Q_CONSTINIT const QMetaObject UndoCommandBase::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSUndoCommandBaseENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSUndoCommandBaseENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSUndoCommandBaseENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<UndoCommandBase, std::true_type>
    >,
    nullptr
} };

void UndoCommandBase::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *UndoCommandBase::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UndoCommandBase::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSUndoCommandBaseENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QUndoCommand"))
        return static_cast< QUndoCommand*>(this);
    return QObject::qt_metacast(_clname);
}

int UndoCommandBase::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSUndoCommandMoveItemsENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSUndoCommandMoveItemsENDCLASS = QtMocHelpers::stringData(
    "UndoCommandMoveItems"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSUndoCommandMoveItemsENDCLASS_t {
    uint offsetsAndSizes[2];
    char stringdata0[21];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSUndoCommandMoveItemsENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSUndoCommandMoveItemsENDCLASS_t qt_meta_stringdata_CLASSUndoCommandMoveItemsENDCLASS = {
    {
        QT_MOC_LITERAL(0, 20)   // "UndoCommandMoveItems"
    },
    "UndoCommandMoveItems"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSUndoCommandMoveItemsENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

Q_CONSTINIT const QMetaObject UndoCommandMoveItems::staticMetaObject = { {
    QMetaObject::SuperData::link<UndoCommandBase::staticMetaObject>(),
    qt_meta_stringdata_CLASSUndoCommandMoveItemsENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSUndoCommandMoveItemsENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSUndoCommandMoveItemsENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<UndoCommandMoveItems, std::true_type>
    >,
    nullptr
} };

void UndoCommandMoveItems::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *UndoCommandMoveItems::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UndoCommandMoveItems::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSUndoCommandMoveItemsENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return UndoCommandBase::qt_metacast(_clname);
}

int UndoCommandMoveItems::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UndoCommandBase::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
