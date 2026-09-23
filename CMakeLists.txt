cmake_minimum_required(VERSION 3.16)
project(MotorController CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(MC_WARNING_FLAGS
    -Wall
    -Wextra
    -Werror
    -Wshadow
    -Wconversion
    -Wsign-conversion
    -Wold-style-cast
    -Wcast-qual
    -Wdouble-promotion
    -Wswitch-enum
    -Wfloat-equal
    -Wnull-dereference
    -Wpointer-arith
    -Wcast-align
)

add_library(mc_core
    firmware/core/src/commutation.cpp
    firmware/core/src/speed_control.cpp
    firmware/core/src/fault.cpp
    firmware/core/src/motor_controller.cpp
)

add_library(mc_port_host_stub
    firmware/port/src/host_stub.cpp
)

target_include_directories(mc_core PUBLIC firmware/core/include)
target_include_directories(mc_port_host_stub PUBLIC firmware/port/include)
target_link_libraries(mc_port_host_stub PUBLIC mc_core)
target_compile_options(mc_core PRIVATE ${MC_WARNING_FLAGS})
target_compile_options(mc_port_host_stub PRIVATE ${MC_WARNING_FLAGS})

add_executable(motorcontroller_app firmware/main.cpp)
target_link_libraries(motorcontroller_app PRIVATE mc_core mc_port_host_stub)
target_compile_options(motorcontroller_app PRIVATE ${MC_WARNING_FLAGS})

enable_testing()
add_subdirectory(tests)
