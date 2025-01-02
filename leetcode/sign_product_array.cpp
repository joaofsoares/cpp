#include <iostream>

using std::vector;

class Solution {
public:
  int arraySign(vector<int> &nums) {

    long p = 1;

    for (int n : nums) {
      if (n == 0)
        return 0;

      p *= signFunc(n);
    }

    return p;
  }

private:
  int signFunc(int product) {
    if (product > 0)
      return 1;
    else if (product < 0)
      return -1;
    else
      return 0;
  }
};

int main() {
  Solution s;

  // vector<int> ns = {-1, -2, -3, -4, 3, 2, 1};
  // vector<int> ns = {1, 5, 0, 2, -3};
  // vector<int> ns = {-1, 1, -1, 1, -1};
  vector<int> ns = {9, 72, 34, 29, -49, -22, -77, -17, -66, -75, -44, -30, -24};

  int res = s.arraySign(ns);

  std::cout << "res = " << res << std::endl;

  return 0;
}
