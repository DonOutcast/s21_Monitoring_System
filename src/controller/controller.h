#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "../model/model.h"

namespace s21 {
class Controller {
private:
  s21::Model model;

public:
  void starting_cpu_agent(std::string &path_logs);
  void starting_memory_agent(std::string &path_logs);
  void starting_network_agent(std::string &url, std::string &path_logs);
  void starting_special_agent(std::string &lvl_privilege, std::string &path_logs);
  void starting_project(std::vector<int> &agents, std::string &path_config, std::string &path_logs);
  std::string print_last_strings(std::string &path_logs);
};

} //  namespace s21

#endif
