#pragma once
#include <iostream>
#include <system_error>
#ifndef FSUTILS_HPP

#define FSUTILS_HPP

void createDirIfNotExists(std::string path);

bool fileExists(std::string path);
#endif