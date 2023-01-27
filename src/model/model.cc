#include "model.h"

std::vector<std::string> s21::Model::starting_cpu_agent() {
  return cpu_agent();
}

std::vector<std::string> s21::Model::starting_memory_agent() {
  return memory_agent();
}

std::vector<std::string> s21::Model::starting_network_agent(std::string url) {
  return network_agent(url);
}

std::vector<std::string>
s21::Model::starting_special_agent(std::string lvl_privilege) {
  return special_agent(lvl_privilege);
}

std::vector<std::string>
s21::Model::starting_agents_thread(std::string lvl_privilege, std::string url, int time) {
  return starting_agents(lvl_privilege, url, time);
}
