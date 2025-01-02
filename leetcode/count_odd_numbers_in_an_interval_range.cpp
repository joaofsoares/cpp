#include <iostream>

class Solution {
public:
  int countOdds(int low, int high) { return (high + 1) / 2 - low / 2; }
};

int main() {
  Solution s;

  // int res = s.countOdds(3, 7);
  int res = s.countOdds(8, 10);
  std::cout << "res = " << res << std::endl;

  return 0;
}
