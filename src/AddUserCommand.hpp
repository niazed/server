#pragma once
#include <iostream>
#include <vector>
#include "Command.hpp"

#ifndef ADDUSERCOMMAND_HPP

#define ADDUSERCOMMAND_HPP

class AddUserCommand : public Command {

    std::string name;
    std::vector<std::string> aliases;
    bool async;

    void run(std::vector<std::string> args, std::vector<std::string> flags);


};

#endif