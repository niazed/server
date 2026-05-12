#pragma once

#include <fstream>
#ifndef SETTINGS_HPP

#define SETTINGS_HPP

#include <iostream>
#include "json.hpp"

struct Settings {

    static nlohmann::json getDefaultSettings();
    static nlohmann::json fromFile(std::string path);
    static nlohmann::json fromFile(std::ifstream stream);
    void toFile(std::string path, nlohmann::json j);
    static void changeSetting(std::string target, std::string layer, std::string setting, nlohmann::basic_json<> replacement);
    static void changeSetting(std::ofstream target, std::string layer, std::string setting, nlohmann::basic_json<> replacement);
    std::any getSetting(std::string target, std::string layer, std::string setting);
    std::any getSetting(std::ifstream target, std::string layer, std::string setting);
};

#endif