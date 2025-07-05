# Elevator-Controller-Simulator

This is a desktop application designed to simulate a pre-programmed elevator controller. The application allows for simulating with customizable floor numbers, passenger names and numbers, and safety events, simulating how the controller would react to real-world inputs and challenges an elevator controller would face. The application was built using Qt/C++ framework.

### Compilation instructions
Follow the below instructions to create an executable of the application.
1. Make a build directory: `mkdir build`
2. Go into the build directory: `cd build`
3. Compile the parent directory: `cmake ..`
4. Run make: `make`
5. Run the executable: `./elevatorcontrollersim`

### Files:
- CMakeLists.txt
- CMakeLists.txt.user
- bell.h bell.cpp
- button.h button.cpp
- closebutton.h closebutton.cpp
- destinationpanel.h destinationpanel.cpp
- display.h display.cpp
- door.h door.cpp
- doorobstaclesensor.h doorobstaclesensor.cpp
- elevator.h elevator.cpp
- elevatorcontroller.h elevatorcontroller.cpp
- elevatorstate.h elevatorstate.cpp
- emergencystate.h emergencystate.cpp
- event.h event.cpp
- firebutton.h firebutton.cpp
- floor.h floor.cpp
- freezestate.h freezestate.cpp
- helpbutton.h helpbutton.cpp
- holdingstate.h holdingstate.cpp
- idlestate.h idlestate.cpp
- main.cpp
- mainwindow.h mainwindow.cpp
- mainwindow.ui
- movingstate.h movingstate.cpp
- openbutton.h openbutton.cpp
- passenger.h passenger.cpp
- passengeraction.h passengeraction.cpp
- pausestate.h pausestate.cpp
- runningstate.h runningstate.cpp
- safetyevent.h safetyevent.cpp
- sensor.h sensor.cpp
- setupstate.h setupstate.cpp
- simulationcontroller.h simulationcontroller.cpp
- simulationstate.h simulationstate.cpp
- speaker.h speaker.cpp
- stopstate.h stopstate.cpp
- weightsensor.h weightsensor.cpp
