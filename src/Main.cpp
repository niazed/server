#include <iostream>
#include "HTTPServer.hpp"

using namespace std;

int main() {

    system("figlet BERK"); // I should integrate this so if the user for some reason doesn't have this installed (e.g. Windows Server)
    cout << "Berk Server v0.1.0 (build 1)" << endl;
    express::Express app;
    startup(app);
    return 0;
    
}