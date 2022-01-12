#include "yamlParser.hpp"
#include "yaml-cpp/yaml.h"
#include <iostream>

/**
 * Parses a YAML file using yaml-cpp and prints the "version" attribute of its contents.
 * 
 * @param yamlFile The path of the file to parse.
 */
void parseConfig(const std::string yamlFile){
  YAML::Node config = YAML::LoadFile(yamlFile);
  std::cout << "Version: " << config["version"].as<std::string>() << std::endl;
}
