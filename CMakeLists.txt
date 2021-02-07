cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

project(Car)

list(APPEND headers
    hdr/Car.h
    hdr/Engine.h
    hdr/Benz.h
    )

list(APPEND sources
    src/Car.cpp
    src/Benz.cpp
    )

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_library(carlib
    STATIC
    ${headers}
    ${sources}
)

add_executable(project main.cpp)

target_link_libraries(project carlib)