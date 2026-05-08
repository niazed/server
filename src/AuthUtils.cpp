#include <iostream>
#include <gcrypt.h>


using namespace std;
bool stringMatchesHash(string password, string hash) {

    if(sha256(password) == hash) {

        return

    }

}