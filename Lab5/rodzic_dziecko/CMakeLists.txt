cmake_minimum_required(VERSION 3.13)
project(rodzic_dziecko)

set(CMAKE_CXX_STANDARD 17)

add_executable(rodzic_dziecko main.cpp dziecko.cpp dziecko.h rodzic.cpp rodzic.h)