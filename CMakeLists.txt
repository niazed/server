cmake_minimum_required(VERSION 3.5)
project(Berk VERSION 0.1.0)

# C++ stuff
set_property(TARGET MyApp PROPERTY CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED On)

# Stolen from https://community.gigperformer.com/t/getting-cmake-variables-from-c/17711
set (PROJECT_VERSION "0.1.0")
set (PROJECT_NAME "BerkServer")
set (PROJECT_TITLE "Berk Server")
string(TIMESTAMP TODAY "%d/%m/%Y")
set (PROJECT_BUILD_DATE ${TODAY})
set (PROJECT_BUILD_NO "1")
configure_file (version.h.in version.h) 
add_executable(${PROJECT_NAME} 

    src/Main.cpp 
    src/HTTPServer.cpp
    src/HTTPServer.hpp
    src/express.hpp

)

# target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_BINARY_DIR})
include_directories(${CMAKE_CURRENT_BINARY_DIR})

# flags to compiler
set(CMAKE_CXX_FLAGS "-Wall -Wno-error -Wextra ${CMAKE_CXX_FLAGS}")


find_package(SQLite3 REQUIRED)
 # /cmake dir

list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake")
find_package(LibGcrypt)
