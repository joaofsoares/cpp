#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::vector;

class Solution {
public:
  bool isValid(string s) {
    vector<char> chars = {};

    for (char c : s) {
      if (c == '(' || c == '[' || c == '{')
        chars.push_back(c);
      else if (c == ')') {
        if (!check_close('(', &chars))
          return false;
      } else if (c == ']') {
        if (!check_close('[', &chars))
          return false;
      } else if (c == '}') {
        if (!check_close('{', &chars))
          return false;
      } else
        return false;
    }

    return chars.size() == 0;
  }

private:
  bool check_close(char c, vector<char> *chars) {
    if (chars->size() != 0) {
      char b = chars->back();
      if (b == c) {
        chars->pop_back();
        return true;
      }
    }
    return false;
  }
};

int main() {
  Solution s;

  bool res = s.isValid("{}");
  std::cout << "is valid? " << res << std::endl;

  res = s.isValid("([)]");
  std::cout << "is valid? " << res << std::endl;

  res = s.isValid("]");
  std::cout << "is valid? " << res << std::endl;

  res = s.isValid("(])");
  std::cout << "is valid? " << res << std::endl;
}
