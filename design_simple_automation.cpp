#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::vector;

class Automaton {
public:
  bool read_commands(const std::vector<char> &commands) {

    string currState = "q1";

    for (size_t i = 0; i < commands.size(); ++i) {
      if (currState == "q1") {
        if (commands[i] == '1')
          currState = "q2";
        else
          currState = "q1";
      } else if (currState == "q2") {
        if (commands[i] == '0')
          currState = "q3";
        else
          currState = "q2";
      } else {
        currState = "q2";
      }
    }

    if (currState == "q2")
      return true;

    return false;
  }
};

int main() {

  Automaton aut = Automaton();

  std::vector<char> commands = {'1', '0', '0', '1'};
  // std::vector<char> commands = {'1', '0', '0', '1', '0'};

  bool res = aut.read_commands(commands);

  std::cout << res << std::endl;

  return 0;
}
