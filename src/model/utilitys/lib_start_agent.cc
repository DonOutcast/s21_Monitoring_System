#include "../agents/lib_agents.h"
void Lib_agent::starting_agents(std::string &lvl_privilege, std::string &url,
                                std::vector<int> &agents, std::string &path_logs) {
    try {
      if (agents[0] == 1) {
        std::thread thread_1([&]() { cpu_agent(path_logs); });
        thread_1.join();
      }
      if (agents[1] == 1) {
        std::thread thread_2([&]() { memory_agent(path_logs); });
        thread_2.join();
      }
      if (agents[2] == 1) {
        std::thread thread_3([&]() { network_agent(url, path_logs); });
        thread_3.join();
      }
      if (agents[3] == 1) {
        std::thread thread_4([&]() { special_agent(lvl_privilege, path_logs); });
        thread_4.join();
      }
    } catch (const std::exception &ex) {
      std::cout << "Thread exited with exception: " << ex.what() << "\n";
    }
}
