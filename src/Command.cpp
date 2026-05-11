#include "Command.hpp"
#include <iostream>
#include <vector>


using namespace std;

Command::Command(string name, vector<string> aliases, bool async) {

    this->name = name;
    this->aliases = aliases;
    this->async = async;


}
string Command::getName() {

    return this->name;

}

vector<string> Command::getAliases() {

    return this->aliases;

}