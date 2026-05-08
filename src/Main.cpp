#include <iostream>
#include "HTTPServer.hpp"
#include <bits/stdc++.h>
#include <version.h>
#include <filesystem>
#include <gcrypt.h>

using namespace std;
using namespace std::filesystem;
void startHTTP() {

    express::Express app;
    startupHTTP(app);

}

int main(int argc, char* argv[]) {

    system("echo BERK | figlet -f larry3d"); // I should integrate this so if the user doesn't have this installed
    cout << PROJECT_NAME << " v" << PROJECT_VERSION << " (build " << PROJECT_BUILD_NO << ")"<< endl;

    cout << "Checking for config directory... ";

    // Servers
    thread http(startHTTP);
    cout << "Hello!" << endl;
    bool commandLoop = true;
    return 0;
    
}