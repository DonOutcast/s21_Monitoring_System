#include <gtest/gtest.h>
#include "../controller/controller.h"
#include "../model/agents/lib_agents.h"
#if defined __cplusplus
# define __ASSERT_VOID_CAST static_cast<void>
#else
# define __ASSERT_VOID_CAST (void)
#endif

std::string path_ = "/opt/goinfre/luigiket/s21_Monitoring_System/src/logs.txt";
std::string paths_ = "/opt/goinfre/luigiket/s21_Monitoring_System/src/config.conf";

TEST(Test_Monitoring_system, test_cpu_agent) {
  s21::Controller controller;
  __ASSERT_VOID_CAST(controller.starting_cpu_agent(path_));
}

TEST(Test_Monitoring_system, test_memory_agent) {
  s21::Controller controller;
  __ASSERT_VOID_CAST(controller.starting_memory_agent(path_));
}

TEST(Test_Monitoring_system, test_network_agent) {
  s21::Controller controller;
  std::string url_ = "https://edu.21-school.ru";
  __ASSERT_VOID_CAST(controller.starting_network_agent(url_, path_));
}

TEST(Test_Monitoring_system, test_special_agent_01) {
  s21::Controller controller;
  std::string lvl_privilege = "cpu_idle_usage";
  __ASSERT_VOID_CAST(controller.starting_special_agent(lvl_privilege, path_));
}

TEST(Test_Monitoring_system, test_special_agent_02) {
  s21::Controller controller;
  std::string lvl_privilege = "cpu_system_usage";
  __ASSERT_VOID_CAST(controller.starting_special_agent(lvl_privilege, path_));
}

TEST(Test_Monitoring_system, test_special_agent_03) {
  s21::Controller controller;
  std::string lvl_privilege = "cpu_user_usage";
  __ASSERT_VOID_CAST(controller.starting_special_agent(lvl_privilege, path_));
}

TEST(Test_Monitoring_system, test_starting_project_01) {
  s21::Controller controller;
  vector<int> agents{1, 0, 0, 0, 6000};
  __ASSERT_VOID_CAST(controller.starting_project(agents, paths_, path_));
}

TEST(Test_Monitoring_system, test_starting_project_02) {
  s21::Controller controller;
  vector<int> agents{0, 1, 0, 0, 6000};
  __ASSERT_VOID_CAST(controller.starting_project(agents, paths_, path_));
}

TEST(Test_Monitoring_system, test_starting_project_03) {
  s21::Controller controller;
  vector<int> agents{0, 0, 1, 0, 6000};
  __ASSERT_VOID_CAST(controller.starting_project(agents, paths_, path_));
}

TEST(Test_Monitoring_system, test_starting_project_04) {
  s21::Controller controller;
  vector<int> agents{0, 0, 0, 1, 6000};
  __ASSERT_VOID_CAST(controller.starting_project(agents, paths_, path_));
}

TEST(Test_Monitoring_system, test_starting_project_05) {
  s21::Controller controller;
  vector<int> agents{1, 1, 1, 1, 6000};
  __ASSERT_VOID_CAST(controller.starting_project(agents, paths_, path_));
}

TEST(Test_Monitoring_system, test_print_last_strings) {
  s21::Controller controller;
  controller.print_last_strings(path_);
  ASSERT_TRUE(controller.print_last_strings(path_).empty() != 1);
}

int main(int argc, char *argv[]) {
testing::InitGoogleTest(&argc, argv);
return RUN_ALL_TESTS();
}