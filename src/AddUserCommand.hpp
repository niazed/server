#pragma once
#include <iostream>
#include <vector>
#include "Command.hpp"

#ifndef ADDUSERCOMMAND_HPP

#define ADDUSERCOMMAND_HPP
// WARNING: THIS COMMAND IS NOT BUILT YET, I DON'T KNOW HOW TO USE MY OWN CODE
Command auc("adduser", {"useradd", "au"}, false);
auc.run override(std::vector<std::string> args, std::vector<std::string> flags) override;
#endif