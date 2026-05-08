#pragma once
#include <iostream>
#include <vector>

#ifndef COMMAND_HPP

#define COMMAND_HPP

class Command {
    public:
        std::string name;
        std::vector<std::string> aliases;
        bool async;

        void run(std::vector<std::string> args, std::vector<std::string> flags);

        Command(std::string name, std::vector<std::string> aliases, bool async);
//   public:
//     Command(const Command &) = default;
//     Command(Command &&) = default;
//     Command &operator=(const Command &) = default;
//     Command &operator=(Command &&) = default;
//     Command(std::string name, std::vector<std::string> aliases, bool async)
//         : name(std::move(name)), aliases(std::move(aliases)), async(async) {}
};

#endif