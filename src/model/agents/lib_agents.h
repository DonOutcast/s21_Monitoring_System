#pragma once
#ifdef __APPLE__
#define SYSTEM_CHECK 1
#endif // __APPLE__

#ifdef __linux__
#define SYSTEM_CHECK 0
#endif // __linux__

#include "../utilitys/utils.h"
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

static const std::vector<std::string> vec_operators{"<", "<=", "==", ">=", ">"};
static const std::string alpha_num{"0123456789."};

class Lib_agent {
    public:
        using monitor_metr = std::map<std::string, double>;
        using config_t = std::map<std::string, std::pair<std::string, double>>;
        
        inline static monitor_metr      system_metrics;
        inline static config_t          config_map;

        static void read_conf();
        static void starting_agents(std::string lvl_privilege, std::string url, int time);

        void compare_maps();
        
        void check_metrics() {
            for (auto it = system_metrics.begin(), ite = system_metrics.end(); it != ite; ++it) {
                std::cout << (*it).first << " | " << (*it).second << std::endl;
            }
        }

        void check_config() {
            for (auto it = config_map.begin(), ite = config_map.end(); it != ite; ++it) {
                std::cout << (*it).first << " | " << (*it).second.first << " | " << (*it).second.second << std::endl;
            }
        }
        
    private:
        static void cpu_agent();
        static void memory_agent();
        static void network_agent(std::string& url);
        static void special_agent(std::string& lvl_privilege);

};