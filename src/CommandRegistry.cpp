// SPDX-FileCopyrightText: 2026 <copyright holder> <email>
// SPDX-License-Identifier: BSD-3-Clause

#include "CommandRegistry.hpp"

void CommandRegistry::addCommand(Command* cmd)
{

    this->commands.push_back(cmd);

}

void CommandRegistry::registerCommands()
{
    // AddUserCommand auc;
    cout << "Registering command adduser" << endl;
    // addCommand(auc);

}

