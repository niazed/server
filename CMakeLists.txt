cmake_minimum_required(VERSION 3.5)
project(Berk VERSION 0.1.0)
add_executable(Berk 

    src/Main.cpp 
    src/HTTPServer.cpp
    src/HTTPServer.hpp
    src/express.hpp
    src/filesystem.hpp

)

# flags to compiler
set(CMAKE_CXX_FLAGS "-Wall -Werror ${CMAKE_CXX_FLAGS}")


find_package(SQLite3 REQUIRED)
 # /cmake dir

list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake")
find_package(LibGcrypt)
