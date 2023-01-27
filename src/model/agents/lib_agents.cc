#include "lib_agents.h"

void Lib_agent::read_conf() {
  std::ifstream file("../config.conf");
  if (!file.good()) {
    throw std::runtime_error("File not exitst!");
  }
  std::regex delim("\\s+");
  std::string line;

  while (std::getline(file, line)) {
    std::regex_token_iterator<std::string::iterator> it(line.begin(),
                                                        line.end(), delim, -1);
    std::regex_token_iterator<std::string::iterator> ite;
    if (std::distance(it, ite) < 3) {
      throw std::runtime_error("Error: bad line!");
    }

    std::string key(*it);
    std::string s_opertors(*++it);
    std::string s_meaning(*++it);

    if (std::find(vec_operators.begin(), vec_operators.end(), s_opertors) ==
        vec_operators.end()) {
      throw std::runtime_error("Error: bad line! " + s_opertors);
    }
    if (!std::all_of(s_meaning.begin(), s_meaning.end(), [](char c) {
          return alpha_num.find(c) != std::string::npos;
        })) {
      throw std::runtime_error("Error: bad line! " + s_meaning);
    }
    config_map[key] =
        std::pair<std::string, double>(s_opertors, std::stod(s_meaning));
  }
  file.close();
}