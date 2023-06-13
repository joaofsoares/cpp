#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::vector;

class Solution {
public:
  int lengthOfLongestSubstring(string s) {
    vector<char> cs = {};
    int res = 0;

    for (int i = 0; i < s.length(); ++i) {
      int cnt = 0;
      for (int j = i; j < s.length(); ++j) {
        bool exists = std::find(cs.begin(), cs.end(), s[j]) != cs.end();
        if (exists) {
          cs = {};
          break;
        } else {
          cs.push_back(s[j]);
          ++cnt;
        }
        res = std::max(res, cnt);
      }
    }

    return res;
  }
};

int main() {
  Solution s;

  int res = s.lengthOfLongestSubstring("abcabcbb");
  std::cout << "res = " << res << std::endl;

  res = s.lengthOfLongestSubstring("bbbbbbbbbb");
  std::cout << "res = " << res << std::endl;

  res = s.lengthOfLongestSubstring("pwwkew");
  std::cout << "res = " << res << std::endl;

  res = s.lengthOfLongestSubstring("aab");
  std::cout << "res = " << res << std::endl;

  res = s.lengthOfLongestSubstring("cdd");
  std::cout << "res = " << res << std::endl;

  res = s.lengthOfLongestSubstring("dvdf");
  std::cout << "res = " << res << std::endl;

  return 0;
}
