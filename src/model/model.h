#pragma once

#include "agents/lib_agents.h"

using std::string;
using std::vector;

namespace s21 {
class Model {
public:
  Model(){};
  void starting_cpu_agent(std::string &path_logs);
  void starting_memory_agent(std::string &path_logs);
  void starting_network_agent(std::string &url, std::string &path_logs);
  void starting_special_agent(std::string &lvl_privilege, std::string &path_logs);
  void start_bot(std::vector<int> &agents, std::string &path_config, std::string &path_logs);
  std::string print_last_str(std::string &path_logs);
};
} // namespace s21

