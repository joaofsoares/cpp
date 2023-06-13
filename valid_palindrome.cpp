#include <__algorithm/remove_if.h>
#include <algorithm>
#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

class Solution {
public:
  bool isPalindrome(string s) {

    string str;
    for (char c : s) {
      if (isalnum(c))
        str += tolower(c);
    }

    string rev_str = str;
    std::reverse(rev_str.begin(), rev_str.end());

    return str == rev_str;
  }
};

int main() {
  Solution s;
  bool res = s.isPalindrome("A man, a plan, a canal: Panama");
  cout << "result = " << res << endl;
  res = s.isPalindrome("race a car");
  cout << "result = " << res << endl;
  return 0;
}
