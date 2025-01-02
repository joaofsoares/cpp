#include <iostream>

using std::string;

class Solution {
public:
  char findTheDifference(string s, string t) {
    if (s.length() == 0) {
      return t[0];
    }

    for (char c : t) {
      size_t found = s.find(c);
      if (found == string::npos)
        return c;
      else
        s.erase(found, 1);
    }

    return t[0];
  }
};

int main() {
  Solution s;

  char res = s.findTheDifference("abcd", "abcde");
  std::cout << "res = " << res << std::endl;

  res = s.findTheDifference("abcd", "abecd");
  std::cout << "res = " << res << std::endl;

  res = s.findTheDifference("", "y");
  std::cout << "res = " << res << std::endl;

  res = s.findTheDifference("a", "aa");
  std::cout << "res = " << res << std::endl;

  res = s.findTheDifference("aba", "aaba");
  std::cout << "res = " << res << std::endl;

  res = s.findTheDifference("aab", "abaa");
  std::cout << "res = " << res << std::endl;

  return 0;
}
