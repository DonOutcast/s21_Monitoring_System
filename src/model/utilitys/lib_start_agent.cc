#include "../agents/lib_agents.h"
//std::vector<std::string> result;
std::mutex g_lock;

// std::vector<std::string> return_vector(std::vector<std::string> input_) {
//   g_lock.lock();
//   for (auto i : input_) {
//     result.push_back(i);
//   }
//   g_lock.unlock();
//   return result;
// }

auto now() { return std::chrono::steady_clock::now(); }

auto awake_time() {
  //std::vector<int> config_datas = get_metric_from_file();
  //int time_ = system_metrics["time"];
  using std::chrono::operator""ms;
  return now() + std::chrono::seconds(1);
}

void Lib_agent::starting_agents(std::string lvl_privilege,
                                         std::string url, int time) {
  auto start = std::chrono::high_resolution_clock::now();
  auto finish = start + std::chrono::seconds(time); // time это время выполнения этой функции
  auto timer{std::chrono::steady_clock::now()};

  while(std::chrono::high_resolution_clock::now() < finish) {
    std::this_thread::sleep_until(awake_time());
    // std::vector<int> config_datas = get_metric_from_file();
    
    // if (config_datas[0] == 1) {
      std::thread thread_1([&]() { cpu_agent(); });
      // thread_1.join();
    // }
    // if (config_datas[1] == 1) {
      std::thread thread_2(
          [&]() { memory_agent(); });
    //   thread_2.join();
    // // }
    // // if (config_datas[2] == 1) {
      std::thread thread_3(
          [&]() { network_agent(url); });
    //   thread_3.join();
    // // }
    // // if (config_datas[3] == 1) {
      // std::thread thread_4([&]() {
      //  special_agent(lvl_privilege);
      // });
    //   thread_4.join();
    // }
    thread_1.join();
    thread_2.join();
    thread_3.join();
    // thread_4.join();
  }
  // return result;
}
