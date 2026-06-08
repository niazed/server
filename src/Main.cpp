#include <iostream>
#include "FSUtils.hpp"
#include "HTTPServer.hpp"
#include <bits/stdc++.h>
#include "json.hpp"
#include <ostream>
#include <version.h>
#include <gcrypt.h>
#include "Settings.hpp"
#include "StringUtils.hpp"
#include "Command.hpp"
#include "AddUserCommand.hpp"
using namespace std;
using namespace std::filesystem;
using json = nlohmann::json;
void startHTTP() {

    express::Express app;
    startupHTTP(app);

}

int main(int argc, char* argv[]) {
    system("echo BERK | figlet"); // I should integrate this so if the user doesn't have this installed
    cout << PROJECT_TITLE << ' ' << PROJECT_VERSION << " (build " << PROJECT_BUILD_NO << ")"<< endl;
    cout << "Parsing arguments..." << endl;

    // Source - https://stackoverflow.com/a/6361621
    // Posted by fredoverflow
    // Retrieved 2026-05-12, License - CC BY-SA 3.0

    vector<string> arguments(argv, argv + argc);

    cout << "Checking for filesystem..." << endl;
    createDirIfNotExists(".crash");
    createDirIfNotExists("config");
    if(!fileExists("config/settings.json")) {
        json j = Settings::getDefaultSettings();
        ofstream defaultSettings("config/settings.json");
        defaultSettings << j;

    }
    createDirIfNotExists("berk");
    createDirIfNotExists("berk/messages");
    createDirIfNotExists("berk/images");
    // I thought i already coded this, and i did, but my Artix broke after a kernel update, and i lost all the code, so if this code sucks its because i dont wanna do it again
    createDirIfNotExists("scripts");
    string target="restart";
    bool useEchoOFF = false;
    #ifdef WIN32
        target.append(".bat");
        useEchoOFF = true;
    #endif
    #if defined(__unix__)
        target.append(".sh");
    #endif
    if (target == "restart") {

        cout << "what" << endl; // theoretically dead code, unless they are running TempleOS which from what i remember cant even connect to the internet so this would never reach it

    }
    string yeah = "scripts/";
    yeah.append(target);
    ifstream IrestartScript(yeah);

    if(!IrestartScript.is_open()) {

        cout << "[WARN] You do not have a " << target << ", would you like to create one using the arguments you passed on here? You can ignore this check by entering 'i' to turn on 'ignore-restart-script-not-found' [y/N/i] ";
        string result;
        cin >> result;
        if(tolower(result[0]) == 'y') {
            ofstream restartScript(yeah);
            if(useEchoOFF) {
                restartScript << "@echo off" << endl;
            }else{
            }
            restartScript << vectorToString(arguments) << endl;
            restartScript.close();

        } else if (tolower(result[0]) == 'i') {

          Settings::changeSetting("settings", "checks", "ignore-restart-script-not-found", true);
        
        }else{
            
        }


    }

    

    // Servers
    thread http(startHTTP);
    usleep(500);
    // Interactive shell
    cout << ">";
    // Command registry
    // vector<Command> commands;
    // AddUserCommand auc;
    // commands.push_back(auc);
    bool commandLoop = true;
    
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
