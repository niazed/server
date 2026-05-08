
#include <iostream>
#include <sstream>
#include <vector>
#include <stdio.h>
#include <string>
#include "StringUtils.hpp"

using namespace std;

vector<string> split_string(string str, char delimiter) {

    stringstream stream(str);

    string x;

    vector<string> returnVec;
    while(getline(stream, x, delimiter)) {
        returnVec.push_back(x);
    }
    return returnVec;

}
bool string_contains(string haystack, string needle) {

    return haystack.find(needle) != string::npos;

}