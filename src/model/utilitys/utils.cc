#include "utils.h"
#include <QDebug>
void input_file(std::string text) {
  std::mutex g_lock;
  g_lock.lock();
  std::ofstream out("../logs.txt",
                    std::ios::app); // поток для записи    if (out.is_open())
  qDebug() << "input_file";
  {
    // std::cout << "Open" << std::endl;
    out << text << std::endl;
  }
  //   std::cout << "End of program" << std::endl;
  g_lock.unlock();
}

std::string get_time() {
  std::string result = "";
  int hour, min, sec;
  std::time_t tim;
  tim = std::time(NULL);
  std::tm *tim1 = std::gmtime(&tim);
  hour = tim1->tm_hour + 3;
  min = tim1->tm_min;
  sec = tim1->tm_sec;
  result = std::to_string(hour) + ":" + std::to_string(min) + ":" +
           std::to_string(sec);
  return result;
}

std::string print_last_string() {
  std::string command;
  qDebug() << "print_last_string";
  command = "cat ../logs.txt | tail -20";
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
  return output;
}
