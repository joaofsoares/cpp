#include <algorithm>
#include <cstring>
#include <iostream>
#include <string>

using std::string;

class Solution {
public:
  int strStr(string haystack, string needle) {

    auto found = haystack.find(needle);
    if (found != string::npos) {
      return found;
    }

    return -1;
  }
};

int main() {
  Solution s;

  int res = s.strStr("sadbutsad", "sad");
  std::cout << "res = " << res << std::endl;

  // int res = s.strStr("butsad", "sad");
  // std::cout << "res = " << res << std::endl;

  // int res = s.strStr("leetcode", "leeto");
  // std::cout << "res = " << res << std::endl;

  // int res = s.strStr("abc", "c");
  // std::cout << "res = " << res << std::endl;

  // int res = s.strStr("mississippi", "issip");
  // std::cout << "res = " << res << std::endl;

  // int res = s.strStr("aaa", "aaaa");
  // std::cout << "res = " << res << std::endl;

  return 0;
}
