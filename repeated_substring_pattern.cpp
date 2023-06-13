#include <iostream>

using std::string;

class Solution {
public:
  bool repeatedSubstringPattern(string s) {

    int s_len = s.length();

    if (s_len == 0)
      return false;

    for (int i = 1; i <= s_len / 2; ++i) {
      if (s_len % i == 0) {
        string sub_str = s.substr(0, i);
        string tmp;

        for (int j = 0; j < s_len / i; ++j) {
          tmp += sub_str;
        }

        if (tmp == s)
          return true;
      }
    }

    return false;
  }
};

int main() {
  Solution s;

  bool res = s.repeatedSubstringPattern("abab");
  std::cout << "res = " << res << std::endl;

  res = s.repeatedSubstringPattern("aba");
  std::cout << "res = " << res << std::endl;

  res = s.repeatedSubstringPattern("abcabcabcabc");
  std::cout << "res = " << res << std::endl;

  res = s.repeatedSubstringPattern("abaababaab");
  std::cout << "res = " << res << std::endl;

  return 0;
}
