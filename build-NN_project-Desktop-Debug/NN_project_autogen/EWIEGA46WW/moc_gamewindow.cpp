/****************************************************************************
** Meta object code from reading C++ file 'gamewindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../NN_project/gamewindow.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gamewindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.3. It"
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
struct qt_meta_stringdata_GameWindow_t {
    uint offsetsAndSizes[18];
    char stringdata0[11];
    char stringdata1[16];
    char stringdata2[1];
    char stringdata3[10];
    char stringdata4[10];
    char stringdata5[11];
    char stringdata6[13];
    char stringdata7[22];
    char stringdata8[22];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_GameWindow_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_GameWindow_t qt_meta_stringdata_GameWindow = {
    {
        QT_MOC_LITERAL(0, 10),  // "GameWindow"
        QT_MOC_LITERAL(11, 15),  // "openFirstWindow"
        QT_MOC_LITERAL(27, 0),  // ""
        QT_MOC_LITERAL(28, 9),  // "load_game"
        QT_MOC_LITERAL(38, 9),  // "n_avatars"
        QT_MOC_LITERAL(48, 10),  // "set_avatar"
        QT_MOC_LITERAL(59, 12),  // "offset_shift"
        QT_MOC_LITERAL(72, 21),  // "on_backButton_clicked"
        QT_MOC_LITERAL(94, 21)   // "on_sendButton_clicked"
    },
    "GameWindow",
    "openFirstWindow",
    "",
    "load_game",
    "n_avatars",
    "set_avatar",
    "offset_shift",
    "on_backButton_clicked",
    "on_sendButton_clicked"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_GameWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    1,   51,    2, 0x0a,    2 /* Public */,
       5,    1,   54,    2, 0x0a,    4 /* Public */,
       5,    0,   57,    2, 0x2a,    6 /* Public | MethodCloned */,
       7,    0,   58,    2, 0x08,    7 /* Private */,
       8,    0,   59,    2, 0x08,    8 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject GameWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_GameWindow.offsetsAndSizes,
    qt_meta_data_GameWindow,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_GameWindow_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<GameWindow, std::true_type>,
        // method 'openFirstWindow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'load_game'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'set_avatar'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'set_avatar'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_backButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_sendButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void GameWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GameWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->openFirstWindow(); break;
        case 1: _t->load_game((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->set_avatar((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->set_avatar(); break;
        case 4: _t->on_backButton_clicked(); break;
        case 5: _t->on_sendButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GameWindow::*)();
            if (_t _q_method = &GameWindow::openFirstWindow; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *GameWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GameWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GameWindow.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int GameWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void GameWindow::openFirstWindow()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
