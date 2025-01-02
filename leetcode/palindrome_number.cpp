#include <iostream>
#include <string>

using std::cout;
using std::endl;

class Solution {
public:
  bool isPalindrome(int x) {
    std::string s = std::to_string(x);
    std::reverse(s.begin(), s.end());
    return std::to_string(x) == s;
  }
};

int main() {

  Solution s;

  bool res = s.isPalindrome(121);
  cout << "res = " << res << endl;

  res = s.isPalindrome(-121);
  cout << "res = " << res << endl;

  res = s.isPalindrome(10);
  cout << "res = " << res << endl;
  return 0;
}
