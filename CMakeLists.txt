cmake_minimum_required(VERSION 3.23)
project(logger)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES
        src/main.cpp
        src/Record.cpp
        src/Record.h
        src/Time.cpp
        src/Time.h
        src/Logger.cpp
        src/Logger.h
        src/Outputter.cpp
        src/Outputter.h
        src/Formatter.cpp
        src/Formatter.h)

add_executable(logger ${SOURCE_FILES})
