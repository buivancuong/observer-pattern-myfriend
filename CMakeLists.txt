cmake_minimum_required(VERSION 3.12)
project(ObserverPattern)

set(CMAKE_CXX_STANDARD 14)

add_executable(ObserverPattern main.cpp Man.h Boy.cpp Boy.h Boy.cpp Boy.h Woman.h Girl.cpp Girl.h)