#ifndef MODEL_H
#define MODEL_H

#include "agents/lib_agents.h"

using std::string;
using std::vector;

namespace s21 {
class Model {
public:
  Model(){};
  std::vector<std::string> starting_cpu_agent();
  std::vector<std::string> starting_memory_agent();
  std::vector<std::string> starting_network_agent(std::string url);
  std::vector<std::string> starting_special_agent(std::string lvl_privilege);

  std::vector<std::string> starting_agents_thread(std::string lvl_privilege,
                                                  std::string url, int time);
};
} // namespace s21

#endif
