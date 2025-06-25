/****************************************************************************
** Meta object code from reading C++ file 'simulationcontroller.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../simulationcontroller.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'simulationcontroller.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.9.1. It"
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
struct qt_meta_tag_ZN20SimulationControllerE_t {};
} // unnamed namespace

template <> constexpr inline auto SimulationController::qt_create_metaobjectdata<qt_meta_tag_ZN20SimulationControllerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "SimulationController",
        "enableResumeButton",
        "",
        "disableResumeButton",
        "updateTimeStep",
        "timeStep",
        "updateElevatorFloor",
        "elevatorID",
        "floor",
        "sendSystemLog",
        "log",
        "response",
        "start",
        "pause",
        "stop",
        "resume",
        "passengerEnteredElevator",
        "Passenger*",
        "passenger",
        "passengerExitedElevator",
        "elevatorFloorChangeReceived",
        "floorNum"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'enableResumeButton'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'disableResumeButton'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'updateTimeStep'
        QtMocHelpers::SignalData<void(const QTime &)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QTime, 5 },
        }}),
        // Signal 'updateElevatorFloor'
        QtMocHelpers::SignalData<void(int, int)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 7 }, { QMetaType::Int, 8 },
        }}),
        // Signal 'sendSystemLog'
        QtMocHelpers::SignalData<void(const QString &, const QString &)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 10 }, { QMetaType::QString, 11 },
        }}),
        // Slot 'start'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'pause'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'stop'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'resume'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'passengerEnteredElevator'
        QtMocHelpers::SlotData<void(Passenger *, int)>(16, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 17, 18 }, { QMetaType::Int, 7 },
        }}),
        // Slot 'passengerExitedElevator'
        QtMocHelpers::SlotData<void(Passenger *, int)>(19, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 17, 18 }, { QMetaType::Int, 7 },
        }}),
        // Slot 'elevatorFloorChangeReceived'
        QtMocHelpers::SlotData<void(int, int)>(20, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 7 }, { QMetaType::Int, 21 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<SimulationController, qt_meta_tag_ZN20SimulationControllerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject SimulationController::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN20SimulationControllerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN20SimulationControllerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN20SimulationControllerE_t>.metaTypes,
    nullptr
} };

void SimulationController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<SimulationController *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->enableResumeButton(); break;
        case 1: _t->disableResumeButton(); break;
        case 2: _t->updateTimeStep((*reinterpret_cast< std::add_pointer_t<QTime>>(_a[1]))); break;
        case 3: _t->updateElevatorFloor((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 4: _t->sendSystemLog((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 5: _t->start(); break;
        case 6: _t->pause(); break;
        case 7: _t->stop(); break;
        case 8: _t->resume(); break;
        case 9: _t->passengerEnteredElevator((*reinterpret_cast< std::add_pointer_t<Passenger*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 10: _t->passengerExitedElevator((*reinterpret_cast< std::add_pointer_t<Passenger*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 11: _t->elevatorFloorChangeReceived((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Passenger* >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Passenger* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (SimulationController::*)()>(_a, &SimulationController::enableResumeButton, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (SimulationController::*)()>(_a, &SimulationController::disableResumeButton, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (SimulationController::*)(const QTime & )>(_a, &SimulationController::updateTimeStep, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (SimulationController::*)(int , int )>(_a, &SimulationController::updateElevatorFloor, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (SimulationController::*)(const QString & , const QString & )>(_a, &SimulationController::sendSystemLog, 4))
            return;
    }
}

const QMetaObject *SimulationController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SimulationController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN20SimulationControllerE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SimulationController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void SimulationController::enableResumeButton()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void SimulationController::disableResumeButton()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void SimulationController::updateTimeStep(const QTime & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void SimulationController::updateElevatorFloor(int _t1, int _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1, _t2);
}

// SIGNAL 4
void SimulationController::sendSystemLog(const QString & _t1, const QString & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1, _t2);
}
QT_WARNING_POP
