cmake_minimum_required(VERSION 3.24)
project(bit_shift_calc)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)


find_package(Qt6 COMPONENTS
        Core
        Gui
        Widgets
        REQUIRED)

add_executable(bit_shift_calc main.cpp)
target_link_libraries(bit_shift_calc
        Qt::Core
        Qt::Gui
        Qt::Widgets
        )

