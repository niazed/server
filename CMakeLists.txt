cmake_minimum_required(VERSION 3.5)
project(BerkServer VERSION 0.1.0)

# Stolen from https://community.gigperformer.com/t/getting-cmake-variables-from-c/17711
set (PROJECT_VERSION "Public Development Build")
set (PROJECT_NAME "BerkServer")
set (PROJECT_TITLE "Berk Server")
string(TIMESTAMP TODAY "%d/%m/%Y")
set (PROJECT_BUILD_DATE ${TODAY})
set (PROJECT_BUILD_NO "2")
configure_file (version.h.in version.h) 
add_executable(BerkServer 

    src/Main.cpp 
    src/HTTPServer.cpp
    src/HTTPServer.hpp
    # src/AuthUtils.cpp
    src/AuthUtils.hpp
    src/StringUtils.cpp
    src/StringUtils.hpp
    src/FSUtils.cpp
    src/FSUtils.hpp
    src/Command.hpp
    src/AddUserCommand.cpp
    src/express.hpp

)

# C++ stuff
set_property(TARGET BerkServer PROPERTY CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED On)

# target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_BINARY_DIR})
include_directories(${CMAKE_CURRENT_BINARY_DIR})

# flags to compiler
set(CMAKE_CXX_FLAGS "-Wall -Wno-error -Wextra -Wunused-parameter -Wreturn-type ${CMAKE_CXX_FLAGS}")

# shared
find_package(SQLite3 REQUIRED)
find_package(Qt6 REQUIRED COMPONENTS Core)
target_link_libraries(BerkServer PRIVATE Qt6::Core)
 # /cmake dir

list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake")
find_package(LibGcrypt)
