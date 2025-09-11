cmake_minimum_required(VERSION 3.31)
project(quotation_pointer_students_system)

set(CMAKE_CXX_STANDARD 20)

add_executable(quotation_pointer_students_system main.cpp
        student.cpp
        student.h
        student_manager.cpp
        student_manager.h
        functions.cpp
        functions.h)
