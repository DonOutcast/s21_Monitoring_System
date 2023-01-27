#include "lib_agents.h"

namespace {
  double ram_total() {
    std::string command;
    if (SYSTEM_CHECK) {
      command = "system_profiler SPHardwareDataType | grep \"Memory\" | awk "
                "'{print $2}'";
    } else {
      command = "grep MemTotal /proc/meminfo | awk '{print $2}'";
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

  double ram() {
    std::string command;
    if (SYSTEM_CHECK) {
      command =
          "ps -caxm -orss= | awk '{ sum += $1 } END { print sum/1024/1024 }'";
    } else {
      command = "free | awk 'FNR == 2 {print $3/$2 * 100.0}'";
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

  double hard_volume() {
    std::string command;
    if (SYSTEM_CHECK) {
      command =
          "df -H | awk '{ sum = /\\/dev\\/disk3/ } END {print $4}' | cut -c 1-3";
    } else {
      command = "df -h / | tail -n 1 | awk '{print $5}' | tr -d '%'";
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

  double hard_ops() {
    std::string command;
    if (SYSTEM_CHECK) {
      command = "iostat -c 1 -w 10 disk0 | awk '{print $1}'| tail -1";
    } else {
      command = "iostat -d -k -x 1 1 | awk 'FNR == 4 {print $6}'";
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

  double hard_throughput() {
    std::string command;
    if (SYSTEM_CHECK) {
      command = "iostat -c 1 -w 10 disk3 | awk '{print $1}'| tail -1";
    } else {
      command = "iostat -dx | grep 'nvme0n1' | awk '{print $6}'";
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
}

void Lib_agent::memory_agent() {
  std::string result = "";
  //std::vector<std::string> res_vector;
  double ram_total_ = ram_total();
  double ram_ = ram();
  double hard_volume_ = hard_volume();
  double hard_ops_ = hard_ops();
  double hard_throughput_ = hard_throughput();
    result = get_time() + " | " + "ram_total" + " : " +
             std::to_string(ram_total_) + " | " + "ram" + " : " +
             std::to_string(ram_) + " | " + "hard_volume" + " : " +
             std::to_string(hard_volume_) + " | " + "hard_ops" + " : " +
             std::to_string(hard_ops_) + " | " + "hard_throughput" + " : " +
             std::to_string(hard_throughput_);
    input_file(result);
  system_metrics.insert(std::make_pair("ram_total", ram_total_));
  system_metrics.insert(std::make_pair("ram", ram_));
  system_metrics.insert(std::make_pair("hard_volume", hard_volume_));
  system_metrics.insert(std::make_pair("hard_ops", hard_ops_));
  system_metrics.insert(std::make_pair("hard_throughput", hard_throughput_));
}
