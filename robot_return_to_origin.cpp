#include <iostream>

using std::string;

class Solution {
public:
  bool judgeCircle(string moves) {
    int v = 0, h = 0;

    for (char move : moves) {
      switch (move) {
      case 'U':
        ++v;
        break;
      case 'D':
        --v;
        break;
      case 'R':
        ++h;
        break;
      case 'L':
        --h;
        break;
      default:
        break;
      }
    }

    return v == 0 && h == 0;
  }
};

int main() {

  Solution s;

  // bool res = s.judgeCircle("UD");
  bool res = s.judgeCircle("LL");

  std::cout << "res = " << res << std::endl;

  return 0;
}
