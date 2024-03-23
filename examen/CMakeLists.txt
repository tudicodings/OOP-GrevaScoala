cmake_minimum_required(VERSION 3.25)
project(examen)

set(CMAKE_CXX_STANDARD 17)

add_executable(examen main.cpp profesor.h profesor.cpp repository.h repository.cpp service.h service.cpp ui.h ui.cpp teste.h teste.cpp)
