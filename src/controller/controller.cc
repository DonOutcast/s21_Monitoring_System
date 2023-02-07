#include "controller.h"

void s21::Controller::starting_cpu_agent(std::string &path_logs) { model.starting_cpu_agent(path_logs); }

void s21::Controller::starting_memory_agent(std::string &path_logs) { model.starting_memory_agent(path_logs); }

void s21::Controller::starting_network_agent(std::string &url, std::string &path_logs) {
  model.starting_network_agent(url, path_logs);
}

void s21::Controller::starting_special_agent(std::string &lvl_privilege, std::string &path_logs) {
  model.starting_special_agent(lvl_privilege, path_logs);
}

void s21::Controller::starting_project(std::vector<int> &agents, std::string &path_config, std::string &path_logs) {
  model.start_bot(agents, path_config, path_logs);
}

std::string s21::Controller::print_last_strings(std::string &path_logs) {
  return model.print_last_str(path_logs);
}

