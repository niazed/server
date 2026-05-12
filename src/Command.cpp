#include "Command.hpp"
#include <iostream>
#include <vector>


using namespace std;

Command::Command(string name, vector<string> aliases, bool async) {

    this->name = name;
    this->aliases = aliases;
    this->async = async;
    this->requireActiveServer = false;


}
Command::Command(string name, vector<string> aliases, bool async, bool requireActiveServer) {

    this->name = name;
    this->aliases = aliases;
    this->async = async;
    this->requireActiveServer = requireActiveServer;


}
string Command::getName() {

    return this->name;

}

vector<string> Command::getAliases() {

    return this->aliases;

}

bool Command::isAsync() {

    return this->async;

}

bool Command::requiresServer() {

    return this->requireActiveServer;

}