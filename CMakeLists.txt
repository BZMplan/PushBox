cmake_minimum_required(VERSION 3.22)
project(PushBox)

set(CMAKE_CXX_STANDARD 14)

add_executable(PushBox main.cpp drawMap.cpp keyDown.cpp moveBox.cpp win.cpp map.cpp)
