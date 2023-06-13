#include <iostream>

using std::string;

class Solution {
public:
  string toLowerCase(string s) {

    for (int i = 0; i < s.length(); ++i) {
      if (isupper(s[i]))
        s[i] = tolower(s[i]);
    }

    return s;
  }
};

int main() {
  Solution s;

  // string res = s.toLowerCase("Hello");
  string res = s.toLowerCase("LOVELY");

  std::cout << "res = " << res << std::endl;

  return 0;
}
