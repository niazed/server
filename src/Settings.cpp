#include "Settings.hpp"
#include "json.hpp"
#include <fstream>
#include <ostream>
#include <version.h>

using json = nlohmann::json;
using namespace std;
json Settings::getDefaultSettings() { // I should optimize this to a pointer for usecases like changing mid server (???) for whatever reason but also memory efficiency

    json j;
    j["checks"]["ignore-restart-script-not-found"] = false;
    j["encryption"]["force-guild-encryption"] = true;
    string serverName = PROJECT_NAME;
    serverName.append(" ");
    serverName.append(PROJECT_VERSION);
    j["server"]["name"] = serverName;
    j["server"]["last-build"] = stoi(PROJECT_BUILD_NO); // For keeping track of updates
    j["config"]["version"] = 1; // Version of configuration file, ONLY increment if any names are changed, added names will be automatically parsed and do not need to be checked by the updater
    return j;

}
json Settings::fromFile(string path) {

    return json::parse(ifstream(path));

}
json Settings::fromFile(ifstream path) {

    return json::parse(path);

}
void Settings::toFile(string path, json j) {

    ofstream out(path);
    out << j;

}

void Settings::changeSetting(string target, string layer, string setting, nlohmann::basic_json<> replacement) {
    string newTarget = "config/";
    newTarget.append(target);
    newTarget.append(".json");
    cout << "Looking for file " << newTarget << endl;
    json j = fromFile(newTarget);
    j[layer][setting] = replacement;
    ofstream out(newTarget, ofstream::trunc);
    out << j;
}