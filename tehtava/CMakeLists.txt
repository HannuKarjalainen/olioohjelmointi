cmake_minimum_required(VERSION 3.5)

project(tehtava LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(tehtava main.cpp)

install(TARGETS tehtava
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
