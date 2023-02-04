#pragma once

#include "agents/lib_agents.h"

using std::string;
using std::vector;

namespace s21 {
class Model {
public:
  Model(){};
  void starting_cpu_agent();
  void starting_memory_agent();
  void starting_network_agent(std::string &url);
  void starting_special_agent(std::string &lvl_privilege);
  void start_bot(std::vector<int> &agents);
  std::string print_last_str();
};
} // namespace s21

