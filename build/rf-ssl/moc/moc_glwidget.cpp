/****************************************************************************
** Meta object code from reading C++ file 'glwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../rf-ssl/gui/glwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'glwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_GLWidget_t {
    QByteArrayData data[16];
    char stringdata[176];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_GLWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_GLWidget_t qt_meta_stringdata_GLWidget = {
    {
QT_MOC_LITERAL(0, 0, 8),
QT_MOC_LITERAL(1, 9, 16),
QT_MOC_LITERAL(2, 26, 0),
QT_MOC_LITERAL(3, 27, 10),
QT_MOC_LITERAL(4, 38, 17),
QT_MOC_LITERAL(5, 56, 12),
QT_MOC_LITERAL(6, 69, 5),
QT_MOC_LITERAL(7, 75, 8),
QT_MOC_LITERAL(8, 84, 3),
QT_MOC_LITERAL(9, 88, 19),
QT_MOC_LITERAL(10, 108, 10),
QT_MOC_LITERAL(11, 119, 9),
QT_MOC_LITERAL(12, 129, 14),
QT_MOC_LITERAL(13, 144, 11),
QT_MOC_LITERAL(14, 156, 8),
QT_MOC_LITERAL(15, 165, 9)
    },
    "GLWidget\0updateVideoStats\0\0VideoStats\0"
    "signalMouseAction\0QMouseEvent*\0event\0"
    "pixelloc\0loc\0signalKeyPressEvent\0"
    "QKeyEvent*\0flipImage\0callZoomNormal\0"
    "callZoomFit\0callHelp\0saveImage\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GLWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06,
       4,    2,   57,    2, 0x06,
       9,    1,   62,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
      11,    0,   65,    2, 0x0a,
      12,    0,   66,    2, 0x0a,
      13,    0,   67,    2, 0x0a,
      14,    0,   68,    2, 0x0a,
      15,    0,   69,    2, 0x0a,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 7,    6,    8,
    QMetaType::Void, 0x80000000 | 10,    6,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void GLWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GLWidget *_t = static_cast<GLWidget *>(_o);
        switch (_id) {
        case 0: _t->updateVideoStats((*reinterpret_cast< VideoStats(*)>(_a[1]))); break;
        case 1: _t->signalMouseAction((*reinterpret_cast< QMouseEvent*(*)>(_a[1])),(*reinterpret_cast< pixelloc(*)>(_a[2]))); break;
        case 2: _t->signalKeyPressEvent((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        case 3: _t->flipImage(); break;
        case 4: _t->callZoomNormal(); break;
        case 5: _t->callZoomFit(); break;
        case 6: _t->callHelp(); break;
        case 7: _t->saveImage(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (GLWidget::*_t)(VideoStats );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GLWidget::updateVideoStats)) {
                *result = 0;
            }
        }
        {
            typedef void (GLWidget::*_t)(QMouseEvent * , pixelloc );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GLWidget::signalMouseAction)) {
                *result = 1;
            }
        }
        {
            typedef void (GLWidget::*_t)(QKeyEvent * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GLWidget::signalKeyPressEvent)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject GLWidget::staticMetaObject = {
    { &QGLWidget::staticMetaObject, qt_meta_stringdata_GLWidget.data,
      qt_meta_data_GLWidget,  qt_static_metacall, 0, 0}
};


const QMetaObject *GLWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GLWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GLWidget.stringdata))
        return static_cast<void*>(const_cast< GLWidget*>(this));
    if (!strcmp(_clname, "RealTimeDisplayWidget"))
        return static_cast< RealTimeDisplayWidget*>(const_cast< GLWidget*>(this));
    return QGLWidget::qt_metacast(_clname);
}

int GLWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGLWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void GLWidget::updateVideoStats(VideoStats _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GLWidget::signalMouseAction(QMouseEvent * _t1, pixelloc _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void GLWidget::signalKeyPressEvent(QKeyEvent * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
