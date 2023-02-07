#include "model.h"

void s21::Model::starting_cpu_agent(std::string &path_logs) { Lib_agent::cpu_agent(path_logs); }

void s21::Model::starting_memory_agent(std::string &path_logs) { Lib_agent::memory_agent(path_logs); }

void s21::Model::starting_network_agent(std::string &url, std::string &path_logs) {
  Lib_agent::network_agent(url, path_logs);
}

void s21::Model::starting_special_agent(std::string &lvl_privilege, std::string &path_logs) {
  Lib_agent::special_agent(lvl_privilege, path_logs);
}

void s21::Model::start_bot(std::vector<int> &agents, std::string &path_config, std::string &path_logs) {
  Lib_agent::starting_bot(agents, path_config, path_logs);
}

std::string s21::Model::print_last_str(std::string &path_logs) {
  return print_last_string(path_logs);
}

