#include "lib_agents.h"

namespace {
  double cpu_load_privilege(std::string lvl_privilege) {
    std::string command;
    if (SYSTEM_CHECK) {
      if(lvl_privilege == "cpu_idle_usage")
        command = "iostat | awk '{print $9}' | tail -n +3";
      else if(lvl_privilege == "cpu_system_usage")
        command = "iostat | awk '{print $8}' | tail -n +3";
      else if(lvl_privilege == "cpu_user_usage")
        command = "iostat | awk '{print $7}' | tail -n +3";
    } else {
      if(lvl_privilege == "cpu_idle_usage")
        command = "mpstat -P ALL | grep 'all' | awk '{print $12}'";
      else if(lvl_privilege == "cpu_system_usage")
        command = "mpstat -P ALL | grep 'all' | awk '{print $5}'";
      else if(lvl_privilege == "cpu_user_usage")
        command = "mpstat -P ALL | grep 'all' | awk '{print $3}'";
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

  double total_swap_volume() {
    std::string command;
    if (SYSTEM_CHECK) {
      command = "sysctl vm.swapusage | awk '{print $4}' | sed 's/.$//'";
    } else {
      command = "free -m | grep 'Swap' | awk '{print $2}'";
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

  double amount_of_swap_used() {
    std::string command;
    if (SYSTEM_CHECK) {
      command = "sysctl vm.swapusage | awk '{print $7}' | sed 's/.$//'";
    } else {
      command = "free -m | grep 'Swap' | awk '{print $3}'";
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

  int number_of_processes_in_queue() {
    std::string command;
    if (SYSTEM_CHECK) {
      command = "ps -e -o ""stat"" | tail -n +2 | grep S | wc -l | awk '$1=$1'";
    } else {
      command = "vmstat 1 2 | awk '{if(NR==3) print $1}'";
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

  #ifdef __linux__
  std::pair<double, double> counting_full_and_free_virtual_memory() {
    double total_virtual_memory = 0.0;
    double free_virtual_memory = 0.0;
    std::ifstream file("/proc/meminfo");
    std::string line;
    while (std::getline(file, line)) {
      if (line.find("MemTotal:") != std::string::npos)
        total_virtual_memory = std::stod(line.substr(line.find(" ")));
      if (line.find("MemFree:") != std::string::npos)
        free_virtual_memory = std::stod(line.substr(line.find(" ")));
    }
    return std::make_pair(total_virtual_memory, free_virtual_memory);
  }
  #endif  // __linux__

  #ifdef __APPLE__
  std::pair<double, double> counting_full_and_free_virtual_memory() {
    std::string command_1, command_2;
    command_1 = "df -h /System/Volumes/VM/ | awk '{print $2}' | tail -n +2 | sed 's/..$//'";
    command_2 = "df -h /System/Volumes/VM/ | awk '{print $4}' | tail -n +2 | sed 's/..$//'";
    std::string total_virtual_memory = "";
    std::string free_virtual_memory = "";
    char buffer[128];
    std::FILE *pipe_1 = popen(command_1.c_str(), "r");
    std::FILE *pipe_2 = popen(command_2.c_str(), "r");
    if (!pipe_1 && !pipe_2) {
      throw std::runtime_error("popen() failed!");
    }
    while (!std::feof(pipe_1)) {
      if (std::fgets(buffer, 128, pipe_1) != NULL)
        total_virtual_memory += buffer;
    }
    while (!std::feof(pipe_2)) {
      if (std::fgets(buffer, 128, pipe_2) != NULL)
        free_virtual_memory += buffer;
    }
    pclose(pipe_1);
    pclose(pipe_2);
    return std::make_pair(std::stod(total_virtual_memory), std::stod(free_virtual_memory));
  }
  #endif

  int total_number_of_inodes() {
    std::string command;
    if (SYSTEM_CHECK) {
      command = "df / | awk '{print $6}' | tail -n +2 | sed 's/.$//'";
    } else {
      command = "df -i | awk '{total += $3} END {print total}'";
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

  double average_hard_disk_read_time() {
    std::string command;
    if (SYSTEM_CHECK) {
      command = "iostat | awk '{print $3}' | tail -n +3";
    } else {
      command = "iostat -d -k /dev/sda | awk '{print $5}' | tail -n +4 | \
      awk '{ sum += $1 } END { if (NR > 0) print sum / NR }'";
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

  int number_of_errors_from_the_system_log() {
    std::string command;
    if (SYSTEM_CHECK) {
      command = "cat /var/log/system.log | grep error | wc -l | awk '$1=$1'";
    } else {
      command = "grep -c ""error"" /var/log/syslog";
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

  int number_of_user_authorizations() {
    std::string command;
    if (SYSTEM_CHECK) {
      command = "cat /var/log/storage-login.log | grep ""Login as "" | wc -l | awk '$1=$1'";
    } else {
      command = "last | echo ""$output"" | grep ""logged in"" | wc -l";
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

void Lib_agent::special_agent(std::string& lvl_privilege) {
  std::string result = "";
  //std::vector<std::string> res_vector;

  double cpu_load_privilege_ = cpu_load_privilege(lvl_privilege);
  double total_swap_volume_ = total_swap_volume();
  double amount_of_swap_used_ = amount_of_swap_used();
  int number_of_processes_in_queue_ = number_of_processes_in_queue();
  double full_virtual_memory_ = counting_full_and_free_virtual_memory().first;
  double free_virtual_memory_ = counting_full_and_free_virtual_memory().second;
  int total_number_of_inodes_ = total_number_of_inodes();
  double average_hard_disk_read_time_ = average_hard_disk_read_time();
    result = get_time() + " | " + "cpu_load_privilege" + " : " +
             std::to_string(cpu_load_privilege_) + " | " + "total_swap_volume" + " : " +
             std::to_string(total_swap_volume_) + " | " + "amount_of_swap_used" + " : " +
             std::to_string(amount_of_swap_used_) + " | " + "number_of_processes_in_queue" + " : " +
             std::to_string(number_of_processes_in_queue_) + "\n" + 
             get_time() + " | " + "full_virtual_memory" + " : " +
             std::to_string(full_virtual_memory_) + " | " + "free_virtual_memory" + " : " +
             std::to_string(free_virtual_memory_) + " | " + "total_number_of_inodes" + " : " +
             std::to_string(total_number_of_inodes_) + " | " + "average_hard_disk_read_time" + " : " +
             std::to_string(average_hard_disk_read_time_);
    input_file(result);
  // res_vector.push_back(std::to_string(cpu_load_privilege_));
  // res_vector.push_back(std::to_string(total_swap_volume_));
  // res_vector.push_back(std::to_string(amount_of_swap_used_));
  // res_vector.push_back(std::to_string(number_of_processes_in_queue_));
  // res_vector.push_back(std::to_string(full_virtual_memory_));
  // res_vector.push_back(std::to_string(free_virtual_memory_));
  // res_vector.push_back(std::to_string(total_number_of_inodes_));
  // res_vector.push_back(std::to_string(average_hard_disk_read_time_));
  // system_metrics["inet_throughput"] = speed_network_;
  // system_metrics["inet_throughput"] = speed_network_;
  // system_metrics["inet_throughput"] = speed_network_;
  // system_metrics["inet_throughput"] = speed_network_;
  // system_metrics["inet_throughput"] = speed_network_;
  // system_metrics["inet_throughput"] = speed_network_;
  // system_metrics["inet_throughput"] = speed_network_;
  // system_metrics["inet_throughput"] = speed_network_;
  //return res_vector;
}