#include <array>
#include <chrono>
#include <cstdio>
#include <ctime>
#include <fstream>
#include <iostream>
#include <math.h>
#include <mutex>
#include <regex>
#include <string>
#include <thread>
#include <vector>
#include <map>
#include "agents/lib_agents.h"

#define TELEGRAM_BOT_TOKEN "5693025715:AAHibzvbweGmTZXs8mnRejUB8JxrnqGVq6VU"
#define TELEGRAM_USER_ID "2012446774"

#define URL                                                                    \
  "https://api.telegram.org/"                                                  \
  "bot$5693025715:AAHibzvbeGmTZXs8mnRejUB8JxrnqGVq6VU/sendMessage"
#define TEXT "Deploy status: "

namespace {

  void bot_message() {
    std::string command = "curl -s -d "
              "\"chat_id=2012446774&disable_web_page_preview=1&text=Fatality\" "
              "https://api.telegram.org/"
              "bot5693025715:AAHibzvbeGmTZXs8mnRejUB8JxrnqGVq6VU/sendMessage";
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
  }


  void equal(double conf, double monitor) {
    if (conf != monitor) {
      bot_message();
    }
  }

  void less(double conf, double monitor) {
    if (conf >= monitor) {
      bot_message();
    }
  }

  void great(double conf, double monitor) {
    if (conf <= monitor) {
      bot_message();
    }
  }

  void less_equal(double conf, double monitor) {
    if (conf > monitor) {
      bot_message();
    }
  }

  void great_equal(double conf, double monitor) {
    if (conf < monitor) {
      bot_message();
    }
  }
}




void Lib_agent::compare_maps() {
  for (auto it = config_map.begin(), ite = config_map.end(); it != ite; ++it) {
    if ((*it).second.first == vec_operators.at(2)) {
      equal((*it).second.second, system_metrics[(*it).first]);
    } else if ((*it).second.first == vec_operators.at(0)) {
      less((*it).second.second, system_metrics[(*it).first]);
    } else if ((*it).second.first == vec_operators.at(1)) {
      less_equal((*it).second.second, system_metrics[(*it).first]);
    } else if ((*it).second.first == vec_operators.at(3)) {
      great_equal((*it).second.second, system_metrics[(*it).first]);
    } else if ((*it).second.first == vec_operators.at(4)) {
      great((*it).second.second, system_metrics[(*it).first]);
    }
  }
}

bool check_metric() {
  // std::vector<std::string> file_ = load_value_from_config();
  // for (auto i = file_.begin(); i != file_.end(); ++i) {
  //   read_conf(*i);
  // }
  Lib_agent curr;

  curr.read_conf();
  curr.starting_agents("cpu_idle_usage", "https://edu.21-school.ru", 5);
  curr.compare_maps();
  // curr.check_metrics();
  // std::cout << "_______________________" << std::endl;
  // curr.check_config();
  
  // for (auto i : metrics_from_system)
  // std::cout << i << std::endl;
  // for (auto i : metrics_from_system) {
  //   metrics_from_system[i] <= config_map
  // }
  return false;
  //return(metrics_from_file[8] != std::stoi(metrics_from_system[0])) ? true : false;
}







int main() {
  // if (check_metric()) {
  //   bot_message();
  // }
  check_metric();
  // std::cout << cpu_load() << std::endl;
  // check_metric();
  // config_map.clear();
  // std::vector<std::string> file_ = load_value_from_config();
  // for (auto i = file_.begin(); i != file_.end(); ++i) {
  //   read_conf(*i);
  // }
  //  for (auto curr : config_map) {
  //       std::cout << curr.first << " | " << curr.second.first << " | " <<  curr.second.second << std::endl;
  //   }
  return 0;
}