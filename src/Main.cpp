#include <iostream>
#include "HTTPServer.hpp"
#include <bits/stdc++.h>
#include <version.h>
#include <filesystem>
#include <gcrypt.h>
#include "StringUtils.hpp"

using namespace std;
using namespace std::filesystem;
void startHTTP() {

    express::Express app;
    startupHTTP(app);

}

int main(int argc, char* argv[]) {

    system("echo BERK | figlet"); // I should integrate this so if the user doesn't have this installed
    cout << PROJECT_TITLE << ' ' << PROJECT_VERSION << " (build " << PROJECT_BUILD_NO << ")"<< endl;

    cout << "Checking for config directory... ";

    // Servers
    thread http(startHTTP);
    cout << "Hello!" << endl;
    bool commandLoop = true;
    // Interactive shell
    while(commandLoop) {

        string command;
        cin >> command;
        vector<string> args = split_string(command, ' ');
        string commandName = args.at(0);
        if(commandName == "exit") {

            commandLoop = false;

        }

    }
    return 0;
    
}