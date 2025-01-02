#include <iostream>
#include <string>

using std::string;

class Solution {
public:
  bool isSubsequence(string s, string t) {

    int s_cnt = 0;
    int t_cnt = 0;

    while (t_cnt < t.size() && s_cnt < s.size()) {

      if (t[t_cnt] == s[s_cnt]) {
        ++s_cnt;
      }

      ++t_cnt;
    }

    return (s_cnt == s.size()) ? true : false;
  }
};

int main() {

  Solution s;

  // bool res = s.isSubsequence("abc", "ahbgdc");
  // bool res = s.isSubsequence("axc", "ahbgdc");
  bool res = s.isSubsequence("", "ahbgdc");

  std::cout << "res = " << res << std::endl;

  return 0;
}
