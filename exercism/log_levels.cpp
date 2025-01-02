#include <string>

namespace log_line {
std::string message(std::string line) {
  size_t idx = line.find(':');
  return line.substr(idx + 2, line.size());
}

std::string log_level(std::string line) {
  size_t end = line.find(']') - 1;
  return line.substr(1, end);
}

std::string reformat(std::string line) {
  std::string msg = message(line);
  std::string level = log_level(line);
  return msg + " (" + level + ")";
}
} // namespace log_line
