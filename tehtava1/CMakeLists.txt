cmake_minimum_required(VERSION 3.5)

project(tehtava1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(tehtava1 main.cpp)

install(TARGETS tehtava1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
