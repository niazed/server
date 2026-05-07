<<<<<<< HEAD
cmake_minimum_required(VERSION 3.0)
project(Berk VERSION 0.1.0)
=======
cmake_minimum_required(VERSION 3.5)
project(Berk VERSION 0.1.0)
add_executable(Berk src/Main.cpp src/Berk.h)


 # /cmake dir

list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake")
find_package(LibGcrypt)
>>>>>>> fed1a0b (Move AES stuff to client, more CMake stuff)
