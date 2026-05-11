#include "Command.hpp"
#include <vector>

using namespace std;
class AddUserCommand : Command {


    public:
        AddUserCommand(string h("adduser"), vector<string> v={"a"}, false) {

            Command(h,v);

        }

    void run(vector<string> args, vector<string> flags) {

        

    };

};