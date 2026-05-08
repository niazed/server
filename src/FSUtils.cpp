#include "FSUtils.hpp"
#include <iostream>
#include <filesystem>

using namespace std;

void createDirIfNotExists(std::string path) {

    if(!filesystem::is_directory(path)) {
        filesystem::create_directory(path);
    }

}