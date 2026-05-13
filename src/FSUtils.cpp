#include "FSUtils.hpp"
#include <fstream>
#include <iostream>
#include <filesystem>

using namespace std;

void createDirIfNotExists(std::string path) {

    if(!filesystem::is_directory(path)) {
        filesystem::create_directory(path);
    }

}
bool fileExists(string path) {

    return ifstream(path).is_open();

}
