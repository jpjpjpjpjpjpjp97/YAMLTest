#include "iostream"
#include "YAMLManager.h"
#include <yaml-cpp/yaml.h>


int main() {
    YAML::Node config = YAML::LoadFile("config.yaml");

    const std::string patientJSONURL = config["settings"]["pacientesJSONURL"].as<std::string>();

    std::cout << patientJSONURL << std::endl;

    return 0;
}
