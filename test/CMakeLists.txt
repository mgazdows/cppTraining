cmake_minimum_required(VERSION 3.5)

project(CarTest)

add_subdirectory(googletest)

list(APPEND sources
    ../src/Car.cpp
    )
list(APPEND headers
    ../hdr/Car.h
    ../hdr/Engine.h
    )
list(APPEND mocks
    mock/EngineMock.hpp
    )


add_executable(cpp_test ATest.cpp ${sources} ${headers} ${mocks})

target_link_libraries(cpp_test
    gtest
    gmock
) 
