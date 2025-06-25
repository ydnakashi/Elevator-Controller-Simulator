# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\ElevatorControllerSimulator_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\ElevatorControllerSimulator_autogen.dir\\ParseCache.txt"
  "ElevatorControllerSimulator_autogen"
  )
endif()
