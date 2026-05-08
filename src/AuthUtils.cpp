#include <iostream>
#include <gcrypt.h>


using namespace std;
bool stringMatchesHash(string password, string hash) {

    if(password == hash) { // DO NOT LEAVE THIS, WE NEED QT CRYPTO STUFF BUT IM IN CLASS SO THISLL HAVE TO WAIT

        return true;

    }else {
        return false;
    }

}