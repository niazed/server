# Berk Server
## What is Berk?
Berk is a messaging app designed with privacy in mind and designed to be lightweight and portable.
## Installation
### Linux
Currently, Berk Server is only tested for Artix/Arch Linux. Download the releases, or [compile it](#Compiling)
### Windows
Untested
### MacOS
Untested
## Compiling
### Dependencies
Berk Server requires the following dependencies:
- libgcrypt

### Building with Ninja (recommended)
Building is very simple as practically any other application that uses Ninja
1. Clone the repository
```sh
git clone https://github.com/niazed/server.git
cd server
```
2. Create the build directory
```sh
mkdir build
cd build
```
3. Generate Ninja files using CMake
```sh
cmake -G Ninja..
```
4. Build Berk Server using Ninja
```sh
ninja
```
### Building with Make
Building is very simple as practically any other application that uses CMake.
> **_NOTE:_**  It is not recommended to use **make install** as it may cause problems in PATH or /usr/bin as the server makes directories in the working directory that may conflict with other programs.
1. Clone the repository
```sh
git clone https://github.com/niazed/server.git
cd server
```
2. Create the build directory
```sh
mkdir build
cd build
```
3. Generate Makefiles using CMake
```sh
cmake ..
```
4. Build Berk Server using Make
```sh
make
```
Then you may do as you wish with the binary.
## Configuration
# Credits
- [express.hpp](https://github.com/SiLeader/express.hpp)
- [WebKit](https://github.com/WebKit/WebKit) for the FindLibGcrypt.cmake
- [json.hpp](https://github.com/nlohmann/json)