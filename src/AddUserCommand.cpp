#include "Command.hpp"
#include <vector>

using namespace std;
// WARNING: THIS COMMAND IS NOT BUILT YET, I DON'T KNOW HOW TO USE MY OWN CODE
class AddUserCommand : Command {


    public:
        AddUserCommand(string h("adduser"), vector<string> v={"a"}, false) {

            Command(h,v);

        }

    void run(vector<string> args, vector<string> flags) {

        

    };

};