cmake_minimum_required(VERSION 3.23)
project(glassy_bridge_g)

set(CMAKE_CXX_STANDARD 23)

add_executable(glassy_bridge_g main.cpp info.h bridge/glass-pair/glassp.h RANDOM.h bridge/glass-pair/glassp.cpp bridge/bri/bridge.h bridge/bri/bridge.cpp userin/userin.h userin/userin.cpp)
