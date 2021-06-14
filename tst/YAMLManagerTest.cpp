//
// Created by Jose Diaz on 6/13/21.
//
#include "gtest/gtest.h"
#include "../lib/yaml-cpp/include/yaml-cpp/yaml.h"

TEST(YAMLManagerTestSuite, YAMLManagerReadTest) {
    YAML::Node config = YAML::LoadFile("config.yaml");

    const std::string patientJSONURL = config["settings"]["pacientesJSONURL"].as<std::string>();

    std::cout << patientJSONURL << std::endl;

    EXPECT_EQ(true, true);
}