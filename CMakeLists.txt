cmake_minimum_required(VERSION 3.23)
project(logger)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES
        src/Record.cpp
        src/Record.h
        src/Time.cpp
        src/Time.h
        src/Logger.cpp
        src/Logger.h
        src/Outputter.cpp
        src/Outputter.h
        src/Formatter.cpp
        src/Formatter.h
        src/Color.cpp
        src/Color.h)

add_executable(logger src/main.cpp ${SOURCE_FILES})

# Catch2 Testing Framework
find_package(Catch2 3 REQUIRED)
set(TEST_FILES test/RecordTest.cpp
               test/FormatterTest.cpp
               test/OutputterTest.cpp)

set(FILES_TO_TEST ${SOURCE_FILES})

add_executable(tests ${TEST_FILES} ${FILES_TO_TEST})
target_link_libraries(tests PRIVATE Catch2::Catch2WithMain)

