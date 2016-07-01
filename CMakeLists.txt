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
        week2/opdracht3/vector.hpp
        week2/opdracht3/vector.cpp
        week2/opdracht3/main.cpp
        )

set(WEEK3.1_FILES
        week3/opdracht1/window.hpp
        week3/opdracht1/window.cpp
        week3/opdracht1/vector.hpp
        week3/opdracht1/vector.cpp
        week3/opdracht1/drawable.hpp
        week3/opdracht1/drawable.cpp
        week3/opdracht1/ball.hpp
        week3/opdracht1/ball.cpp
        week3/opdracht1/line.hpp
        week3/opdracht1/line.cpp
        week3/opdracht1/rectangle.hpp
        week3/opdracht1/rectangle.cpp
        week3/opdracht1/circle.hpp
        week3/opdracht1/circle.cpp
        week3/opdracht1/wall.h
        week3/opdracht1/wall.cpp
        week3/opdracht1/main.cpp
        )

set(WEEK3.2_FILES
        week3/opdracht2/window.hpp
        week3/opdracht2/window.cpp
        week3/opdracht2/vector.hpp
        week3/opdracht2/vector.cpp
        week3/opdracht2/drawable.hpp
        week3/opdracht2/drawable.cpp
        week3/opdracht2/ball.hpp
        week3/opdracht2/ball.cpp
        week3/opdracht2/line.hpp
        week3/opdracht2/line.cpp
        week3/opdracht2/rectangle.hpp
        week3/opdracht2/rectangle.cpp
        week3/opdracht2/circle.hpp
        week3/opdracht2/circle.cpp
        week3/opdracht2/wall.h
        week3/opdracht2/wall.cpp
        week3/opdracht2/main.cpp
        )

set(WEEK3.3_FILES
        week3/opdracht3/window.hpp
        week3/opdracht3/window.cpp
        week3/opdracht3/vector.hpp
        week3/opdracht3/vector.cpp
        week3/opdracht3/drawable.hpp
        week3/opdracht3/drawable.cpp
        week3/opdracht3/ball.hpp
        week3/opdracht3/ball.cpp
        week3/opdracht3/line.hpp
        week3/opdracht3/line.cpp
        week3/opdracht3/rectangle.hpp
        week3/opdracht3/rectangle.cpp
        week3/opdracht3/circle.hpp
        week3/opdracht3/circle.cpp
        week3/opdracht3/wall.h
        week3/opdracht3/wall.cpp
        week3/opdracht3/victim.h
        week3/opdracht3/victim.cpp
        week3/opdracht3/main.cpp
        )
add_executable(week1.1 ${WEEK1.1_FILES})
add_executable(week1.2 ${WEEK1.2_FILES})
add_executable(week2.1 ${WEEK2.1_FILES})
add_executable(week2.3 ${WEEK2.3_FILES})
add_executable(week3.1 ${WEEK3.1_FILES})
add_executable(week3.2 ${WEEK3.2_FILES})
add_executable(week3.3 ${WEEK3.3_FILES})
