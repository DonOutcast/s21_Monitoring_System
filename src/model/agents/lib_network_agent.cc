#include "lib_agents.h"
namespace {
int validation_url(std::string &url) {
  std::string command =
      "curl -I " + url + " -o /dev/null -s -w '%{http_code}\n'";
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
  return (std::stod(output) == 200 ? 1 : 0);
}

double speed_network() {
  std::string command;
  if (SYSTEM_CHECK) {
    command = "netstat -bI en0 | grep -E \"en0|Bytes\" | grep -v \"Refs\" "
              "| awk '{print $7}' | tail -1";
  } else {
    command = "bash -c 'cat /proc/net/dev'";
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
  if (SYSTEM_CHECK) {
    return std::stod(output) / 1024 / 1024 / 1024;
  }
  std::smatch match;
  std::regex pattern("[a-z]+:\\s+(\\d+)\\s+(\\d+)");
  double inet_through = 0;
  while (std::regex_search(output, match, pattern)) {
    double rx = std::stod(match[1]);
    double tx = std::stod(match[2]);
    inet_through += rx + tx;
    output = match.suffix().str();
  }
  return inet_through;
}
} // namespace

void Lib_agent::network_agent(std::string &url) {
  std::stringstream result;
  double speed_network_ = speed_network();
  int url_ = validation_url(url);
  result << get_time() << " "
         << "network_agent"
         << " | " << url << " : "
         << ((url_ == 1) ? ("available") : ("not available")) << " | "
         << "inet_throughput"
         << " : " << round(speed_network_ * 100) / 100;
  input_file(result.str());
  system_metrics.insert(std::make_pair("url", url_));
  system_metrics.insert(std::make_pair("inet_throughput", speed_network_));
}
