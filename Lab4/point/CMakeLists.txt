cmake_minimum_required(VERSION 3.13)
project(point_test)

set(CMAKE_CXX_STANDARD 17)

add_executable(point_test main.cpp point.cpp point.h square.cpp square.h)