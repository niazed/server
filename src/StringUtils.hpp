#pragma once
#include <iostream>
#include <string>
#include <vector>
#ifndef STRINGUTILS_HPP

#define STRINGUTILS_HPP

bool string_contains(std::string haystack, std::string needle);
std::vector<std::string> split_string(std::string str, char delimiter);
std::string vectorToString(std::vector<std::string> vec);

#endif
