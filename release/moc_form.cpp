/****************************************************************************
** Meta object code from reading C++ file 'form.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../form.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'form.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Form_t {
    QByteArrayData data[25];
    char stringdata0[364];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Form_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Form_t qt_meta_stringdata_Form = {
    {
QT_MOC_LITERAL(0, 0, 4), // "Form"
QT_MOC_LITERAL(1, 5, 18), // "on_PushAdd_clicked"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 20), // "on_ListMusic_clicked"
QT_MOC_LITERAL(4, 46, 5), // "index"
QT_MOC_LITERAL(5, 52, 20), // "on_StartStop_clicked"
QT_MOC_LITERAL(6, 73, 23), // "on_VolumnButton_clicked"
QT_MOC_LITERAL(7, 97, 27), // "on_VolumnSlider_sliderMoved"
QT_MOC_LITERAL(8, 125, 8), // "position"
QT_MOC_LITERAL(9, 134, 15), // "mousePressEvent"
QT_MOC_LITERAL(10, 150, 12), // "QMouseEvent*"
QT_MOC_LITERAL(11, 163, 5), // "event"
QT_MOC_LITERAL(12, 169, 23), // "on_PreviousSong_clicked"
QT_MOC_LITERAL(13, 193, 19), // "on_NextSong_clicked"
QT_MOC_LITERAL(14, 213, 15), // "on_Mode_clicked"
QT_MOC_LITERAL(15, 229, 25), // "on_TimeSlider_sliderMoved"
QT_MOC_LITERAL(16, 255, 12), // "get_Duration"
QT_MOC_LITERAL(17, 268, 3), // "dur"
QT_MOC_LITERAL(18, 272, 9), // "broadcast"
QT_MOC_LITERAL(19, 282, 3), // "now"
QT_MOC_LITERAL(20, 286, 11), // "end_of_song"
QT_MOC_LITERAL(21, 298, 13), // "QMediaContent"
QT_MOC_LITERAL(22, 312, 8), // "medianow"
QT_MOC_LITERAL(23, 321, 11), // "change_song"
QT_MOC_LITERAL(24, 333, 30) // "on_VolumnSlider_sliderReleased"

    },
    "Form\0on_PushAdd_clicked\0\0on_ListMusic_clicked\0"
    "index\0on_StartStop_clicked\0"
    "on_VolumnButton_clicked\0"
    "on_VolumnSlider_sliderMoved\0position\0"
    "mousePressEvent\0QMouseEvent*\0event\0"
    "on_PreviousSong_clicked\0on_NextSong_clicked\0"
    "on_Mode_clicked\0on_TimeSlider_sliderMoved\0"
    "get_Duration\0dur\0broadcast\0now\0"
    "end_of_song\0QMediaContent\0medianow\0"
    "change_song\0on_VolumnSlider_sliderReleased"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Form[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x08 /* Private */,
       3,    1,   90,    2, 0x08 /* Private */,
       5,    0,   93,    2, 0x08 /* Private */,
       6,    0,   94,    2, 0x08 /* Private */,
       7,    1,   95,    2, 0x08 /* Private */,
       9,    1,   98,    2, 0x08 /* Private */,
      12,    0,  101,    2, 0x08 /* Private */,
      13,    0,  102,    2, 0x08 /* Private */,
      14,    0,  103,    2, 0x08 /* Private */,
      15,    1,  104,    2, 0x08 /* Private */,
      16,    1,  107,    2, 0x08 /* Private */,
      18,    1,  110,    2, 0x08 /* Private */,
      20,    1,  113,    2, 0x08 /* Private */,
      23,    1,  116,    2, 0x08 /* Private */,
      24,    0,  119,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::LongLong,   17,
    QMetaType::Void, QMetaType::LongLong,   19,
    QMetaType::Void, 0x80000000 | 21,   22,
    QMetaType::Void, 0x80000000 | 21,   22,
    QMetaType::Void,

       0        // eod
};

void Form::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Form *_t = static_cast<Form *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_PushAdd_clicked(); break;
        case 1: _t->on_ListMusic_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 2: _t->on_StartStop_clicked(); break;
        case 3: _t->on_VolumnButton_clicked(); break;
        case 4: _t->on_VolumnSlider_sliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->mousePressEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 6: _t->on_PreviousSong_clicked(); break;
        case 7: _t->on_NextSong_clicked(); break;
        case 8: _t->on_Mode_clicked(); break;
        case 9: _t->on_TimeSlider_sliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->get_Duration((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 11: _t->broadcast((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 12: _t->end_of_song((*reinterpret_cast< QMediaContent(*)>(_a[1]))); break;
        case 13: _t->change_song((*reinterpret_cast< QMediaContent(*)>(_a[1]))); break;
        case 14: _t->on_VolumnSlider_sliderReleased(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMediaContent >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMediaContent >(); break;
            }
            break;
        }
    }
}

const QMetaObject Form::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Form.data,
      qt_meta_data_Form,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Form::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Form::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Form.stringdata0))
        return static_cast<void*>(const_cast< Form*>(this));
    return QWidget::qt_metacast(_clname);
}

int Form::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
