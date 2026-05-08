#include <iostream>
#include "HTTPServer.hpp"
#include <bits/stdc++.h>
#include <version.h>

using namespace std;

void startHTTP() {

    express::Express app;
    startupHTTP(app);

}

int main(int argc, char* argv[]) {

    system("figlet BERK"); // I should integrate this so if the user for some reason doesn't have this installed (e.g. Windows Server)
    cout << PROJECT_NAME << " v" << PROJECT_VERSION << " (build " << PROJECT_BUILD_NO << ")"<< endl;
    thread http(startHTTP);
    cout << "Hello!" << endl;
    bool commandLoop = true;
    return 0;
    
}