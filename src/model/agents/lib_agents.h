#pragma once
#ifdef __APPLE__
#define SYSTEM_CHECK 1
#endif // __APPLE__

#ifdef __linux__
#define SYSTEM_CHECK 0
#endif // __linux__

#include "../utilitys/utils.h"
#include <array>
#include <chrono>
#include <cstdio>
#include <ctime>
#include <fstream>
#include <iostream>
#include <map>
#include <cmath>
#include <mutex>
#include <regex>
#include <string>
#include <thread>
#include <vector>
#include <sstream>

static const std::vector<std::string> vec_operators{"<", "<=", "==", ">=", ">"};
static const std::string alpha_num{"0123456789."};

class Lib_agent {
public:
  using monitor_metr = std::map<std::string, double>;
  using config_t = std::map<std::string, std::pair<std::string, double>>;

  inline static monitor_metr system_metrics;
  inline static config_t config_map;

  static void read_conf(std::string &path_config);
  static void starting_agents(std::string &lvl_privilege, std::string &url,
                              std::vector<int> &agents, std::string &path_logs);

  void compare_maps();

  void check_metrics() {
    for (auto it = system_metrics.begin(), ite = system_metrics.end();
         it != ite; ++it) {
      std::cout << (*it).first << " | " << (*it).second << std::endl;  
    }
  }

  void check_config() {
    for (auto it = config_map.begin(), ite = config_map.end(); it != ite;
         ++it) {
      std::cout << (*it).first << " | " << (*it).second.first << " | "
                << (*it).second.second << std::endl;
    }
  }

public:
  static void cpu_agent(std::string &path_logs);
  static void memory_agent(std::string &path_logs);
  static void network_agent(std::string &url, std::string &path_logs);
  static void special_agent(std::string &lvl_privilege, std::string &path_logs);
  static void starting_bot(std::vector<int> &agents, std::string &path_config, std::string &path_logs);
};
