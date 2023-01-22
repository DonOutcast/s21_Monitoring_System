cmake_minimum_required(VERSION 3.21)
project(s21_Monitoring_System)

set(CMAKE_CXX_STANDARD 14)

add_executable(s21_Monitoring_System
        src/agents/agent.cpp
        src/kernel.cpp)
