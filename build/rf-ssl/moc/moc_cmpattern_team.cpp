/****************************************************************************
** Meta object code from reading C++ file 'cmpattern_team.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../rf-common/cmpattern/cmpattern_team.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cmpattern_team.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CMPattern__Team_t {
    QByteArrayData data[8];
    char stringdata[112];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_CMPattern__Team_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_CMPattern__Team_t qt_meta_stringdata_CMPattern__Team = {
    {
QT_MOC_LITERAL(0, 0, 15),
QT_MOC_LITERAL(1, 16, 21),
QT_MOC_LITERAL(2, 38, 0),
QT_MOC_LITERAL(3, 39, 19),
QT_MOC_LITERAL(4, 59, 8),
QT_MOC_LITERAL(5, 68, 4),
QT_MOC_LITERAL(6, 73, 19),
QT_MOC_LITERAL(7, 93, 17)
    },
    "CMPattern::Team\0signalTeamNameChanged\0"
    "\0signalChangeOccured\0VarType*\0item\0"
    "slotTeamNameChanged\0slotChangeOccured\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CMPattern__Team[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06,
       3,    1,   35,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       6,    0,   38,    2, 0x09,
       7,    1,   39,    2, 0x09,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,

       0        // eod
};

void CMPattern::Team::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Team *_t = static_cast<Team *>(_o);
        switch (_id) {
        case 0: _t->signalTeamNameChanged(); break;
        case 1: _t->signalChangeOccured((*reinterpret_cast< VarType*(*)>(_a[1]))); break;
        case 2: _t->slotTeamNameChanged(); break;
        case 3: _t->slotChangeOccured((*reinterpret_cast< VarType*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< VarType* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< VarType* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Team::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Team::signalTeamNameChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (Team::*_t)(VarType * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Team::signalChangeOccured)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject CMPattern::Team::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CMPattern__Team.data,
      qt_meta_data_CMPattern__Team,  qt_static_metacall, 0, 0}
};


const QMetaObject *CMPattern::Team::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CMPattern::Team::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CMPattern__Team.stringdata))
        return static_cast<void*>(const_cast< Team*>(this));
    return QObject::qt_metacast(_clname);
}

int CMPattern::Team::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void CMPattern::Team::signalTeamNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void CMPattern::Team::signalChangeOccured(VarType * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE