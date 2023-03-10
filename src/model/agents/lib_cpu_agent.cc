#include "lib_agents.h"
namespace {
double cpu_load() {
  std::string command;
  if (SYSTEM_CHECK) {
    command = "top -l 1 | grep -E \"^CPU\" | awk '{print $3}' | cut -c 1-4";
  } else {
    command = "bash -c 'top -bn1 | grep \"Cpu(s)\" | sed \"s/.*, "
              "*\\([0-9.]*\\)%* id.*/\\1/\"'";
  }
  std::string output = "";
  char buffer[128];
  std::FILE *pipe = popen(command.c_str(), "r");
  if (!pipe) {
    throw std::runtime_error("popen() failed!");
  }
  while (!std::feof(pipe)) {
    if (std::fgets(buffer, 128, pipe) != NULL)
      output += buffer;
  }
  pclose(pipe);
  return std::stod(output);
}

int number_of_processes() {
  std::string command;
  if (SYSTEM_CHECK) {
    command = "ps -e | wc -l | cut -c 6-8";
  } else {
    command = "bash -c 'ps aux | wc -l'";
  }
  std::string output = "";
  char buffer[128];
  std::FILE *pipe = popen(command.c_str(), "r");
  if (!pipe) {
    throw std::runtime_error("popen() failed!");
  }
  while (!std::feof(pipe)) {
    if (std::fgets(buffer, 128, pipe) != NULL)
      output += buffer;
  }
  pclose(pipe);
  return std::stod(output);
}
} // namespace

void Lib_agent::cpu_agent(std::string &path_logs) {
  std::stringstream result;
  double cpu_usage = cpu_load();
  int processes = number_of_processes();
  result << get_time() << " "
         << "cpu_agent"
         << " | "
         << "cpu"
         << " : " << round(cpu_usage * 100) / 100 << " | "
         << "processes"
         << " : " << std::to_string(processes);
  input_file(result.str(), path_logs);
  system_metrics.insert(std::make_pair("cpu", cpu_usage));
  system_metrics.insert(std::make_pair("processes", processes));
}
