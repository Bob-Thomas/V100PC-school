cmake_minimum_required(VERSION 3.3)
project(TCTI_V1OOPC_15_BASE)
include_directories(Catch/include)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(WEEK1.1_FILES
        week1/opdracht1/window.hpp
        week1/opdracht1/window.cpp
        week1/opdracht1/rectangle.hpp
        week1/opdracht1/rectangle.cpp
        week1/opdracht1/main.cpp
        )

set(WEEK1.2_FILES
        week1/opdracht2/window.hpp
        week1/opdracht2/window.cpp
        week1/opdracht2/rectangle.hpp
        week1/opdracht2/rectangle.cpp
        week1/opdracht2/circle.hpp
        week1/opdracht2/circle.cpp
        week1/opdracht2/line.hpp
        week1/opdracht2/line.cpp
        week1/opdracht2/car.hpp
        week1/opdracht2/car.cpp
        week1/opdracht2/main.cpp
        )


set(WEEK2.1_FILES
        Catch/include/catch_with_main.hpp
        week2/opdracht1-2/rational.hpp
        week2/opdracht1-2/main.cpp
        )

set(WEEK2.3_FILES
        Catch/include/catch_with_main.hpp
        week2/opdracht3/vector.h
        week2/opdracht3/vector.cpp
        week2/opdracht3/main.cpp
        )

add_executable(week1.1 ${WEEK1.1_FILES})
add_executable(week1.2 ${WEEK1.2_FILES})
add_executable(week2.1 ${WEEK2.1_FILES})
add_executable(week2.3 ${WEEK2.3_FILES})
