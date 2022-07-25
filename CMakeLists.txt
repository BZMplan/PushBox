cmake_minimum_required(VERSION 3.22)
project(PushBox)

set(CMAKE_CXX_STANDARD 14)
set(EasyX_ROOT D:/EasyX)
set(EasyX_INC ${EasyX_ROOT}/include)
set(EasyX_LINK ${EasyX_ROOT}/lib/x86)

include_directories(
        ${EasyX_INC}
)

link_directories(
        ${EasyX_LINK}
)

add_executable(PushBox main.cpp drawMap.cpp keyDown.cpp moveBox.cpp win.cpp map.cpp)

target_link_libraries(PushBox
        EasyXa
        EasyXw
)