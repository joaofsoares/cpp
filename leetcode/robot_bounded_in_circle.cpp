#include <iostream>

using std::pair;
using std::string;

class Solution {
public:
  bool isRobotBounded(string instructions) {

    int coords[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};

    pair<int, int> robot = {0, 0};

    int r = 0;

    for (int i = 0; i < instructions.size(); ++i) {
      if (instructions[i] == 'G') {
        robot.first += coords[r][0];
        robot.second += coords[r][1];
      } else if (instructions[i] == 'L')
        r = (r + 1) % 4;
      else
        r = ((r - 1) + 4) % 4;
    }
    return (robot.first == 0 && robot.second == 0) || r > 0;
  }
};

int main() {

  Solution s;

  bool res = s.isRobotBounded("GGLLGG");
  std::cout << "res = " << res << std::endl;

  res = s.isRobotBounded("GG");
  std::cout << "res = " << res << std::endl;

  res = s.isRobotBounded("GL");
  std::cout << "res = " << res << std::endl;

  return 0;
}
