cmake_minimum_required(VERSION 3.16)
project(ElevatorControllerSimulator VERSION 1.0 LANGUAGES C CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOUIC ON)

find_package(QT NAMES Qt5 Qt6 REQUIRED COMPONENTS Core)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Gui)
find_package(Qt${QT_VERSION_MAJOR} OPTIONAL_COMPONENTS Widgets)

qt_standard_project_setup()

qt_add_executable(ElevatorControllerSimulator WIN32 MACOSX_BUNDLE
    bell.cpp bell.h
    button.cpp button.h
    closebutton.cpp closebutton.h
    destinationpanel.cpp destinationpanel.h
    display.cpp display.h
    door.cpp door.h
    doorobstaclesensor.cpp doorobstaclesensor.h
    elevator.cpp elevator.h
    elevatorcontroller.cpp elevatorcontroller.h
    elevatorstate.cpp elevatorstate.h
    emergencystate.cpp emergencystate.h
    event.cpp event.h
    firebutton.cpp firebutton.h
    floor.cpp floor.h
    freezestate.cpp freezestate.h
    helpbutton.cpp helpbutton.h
    holdingstate.cpp holdingstate.h
    idlestate.cpp idlestate.h
    main.cpp
    mainwindow.cpp mainwindow.h mainwindow.ui
    movingstate.cpp movingstate.h
    openbutton.cpp openbutton.h
    passenger.cpp passenger.h
    passengeraction.cpp passengeraction.h
    pausestate.cpp pausestate.h
    runningstate.cpp runningstate.h
    safetyevent.cpp safetyevent.h
    sensor.cpp sensor.h
    setupstate.cpp setupstate.h
    simulationcontroller.cpp simulationcontroller.h
    simulationstate.cpp simulationstate.h
    speaker.cpp speaker.h
    stopstate.cpp stopstate.h
    weightsensor.cpp weightsensor.h
)
target_link_libraries(ElevatorControllerSimulator PRIVATE
    Qt::Core
    Qt::Gui
)

if((QT_VERSION_MAJOR GREATER 4))
    target_link_libraries(ElevatorControllerSimulator PRIVATE
        Qt::Widgets
    )
endif()

install(TARGETS ElevatorControllerSimulator
    BUNDLE DESTINATION .
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

qt_generate_deploy_app_script(
    TARGET ElevatorControllerSimulator
    FILENAME_VARIABLE deploy_script
    NO_UNSUPPORTED_PLATFORM_ERROR
)
install(SCRIPT ${deploy_script})
