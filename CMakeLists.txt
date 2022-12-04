cmake_minimum_required(VERSION 3.24)
project(StudentsManager)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(StudentsManager
        Course.cpp
        Course.h)
