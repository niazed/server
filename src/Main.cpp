#include <iostream>
#include "FSUtils.hpp"
#include "HTTPServer.hpp"
#include <bits/stdc++.h>
#include <version.h>
#include <gcrypt.h>
#include "StringUtils.hpp"
#include "Command.hpp"
#include "AddUserCommand.hpp"
using namespace std;
using namespace std::filesystem;
void startHTTP() {

    express::Express app;
    startupHTTP(app);

}

int main(int argc, char* argv[]) {

    system("echo BERK | figlet"); // I should integrate this so if the user doesn't have this installed
    cout << PROJECT_TITLE << ' ' << PROJECT_VERSION << " (build " << PROJECT_BUILD_NO << ")"<< endl;

    cout << "Checking for config directory's existence... " << endl;
    createDirIfNotExists("config");
    createDirIfNotExists("sdb");

    // Servers
    thread http(startHTTP);
    // Interactive shell
    cout << ">";
    // Command registry
    vector<Command> commands;
    AddUserCommand auc;
    // commands.push_back(auc);
    bool commandLoop = true;
    
    while(commandLoop) {

        string command;
        cout << ">";
        cin >> command;
        vector<string> args = split_string(command, ' ');
        string commandName = args.at(0);
        if(commandName == "exit") {

            commandLoop = false;

        }

    }
    return 0;
    
}