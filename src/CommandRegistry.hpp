// SPDX-FileCopyrightText: 2026 <copyright holder> <email>
// SPDX-License-Identifier: BSD-3-Clause

#ifndef COMMANDREGISTRY_HPP
#define COMMANDREGISTRY_HPP

#include <iostream>
#include "Command.hpp"
#include <memory>

/**
 * @todo write docs
 */
class CommandRegistry
{
private:
    std::vector<std::unique_ptr<Command>> commands;
public:
    std::vector<std::unique_ptr<Command>> getCommands();
    static void addCommand(Command* cmd);
    static void registerCommands();
};

#endif // COMMANDREGISTRY_HPP
