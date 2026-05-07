#include <cstdint>
#include <gcrypt.h>
#include <iostream>
#include <vector>
#include <string>

using namespace std;
class AESKey {

    public:
        uint8_t bitsize;
        string key;
        string iv;
        vector<char> toStream() {

            vector<char> chars;
            
            // Berk byte signature
            chars.push_back('B');
            chars.push_back('K');
            chars.push_back(1); // HACK: make .properties resource for key versioning

            chars.push_back(' '); // size
            chars.push_back(bitsize);
            chars.push_back(' '); // iv
            for (char c : iv) {

                chars.push_back(c);

            }
            chars.push_back(' '); // key
            for (char c : key) {

                chars.push_back(c);

            }

            return chars;
            

        }

};