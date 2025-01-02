#include <algorithm>
#include <climits>
#include <iostream>
#include <iterator>
#include <string>
#include <valarray>

using std::string;
using std::to_string;

class Solution {
public:
  int reverse(int x) {

    bool is_positive = x > 0 ? true : false;

    try {
      string str_int = to_string(std::abs(x));
      std::reverse(str_int.begin(), str_int.end());
      str_int = is_positive ? str_int : "-" + str_int;
      return std::stoi(str_int);
    } catch (...) {
      return 0;
    }
  }
};

int main() {
  Solution s;

  int res = s.reverse(123);
  std::cout << "res = " << res << std::endl;

  res = s.reverse(-123);
  std::cout << "res = " << res << std::endl;

  res = s.reverse(-2147483647);
  std::cout << "res = " << res << std::endl;

  res = s.reverse(2147483647);
  std::cout << "res = " << res << std::endl;

  return 0;
}
