#include <iostream>
#include <string>

using std::string;

class Solution {
public:
  string suffix(string str1, string str2) {
    string res = "";

    int str1_size = str1.length() - 1;
    int str2_size = str2.length() - 1;

    while (str1_size >= 0 && str2_size >= 0) {
      if (str1[str1_size] == str2[str2_size])
        res += str1[str1_size];
      else
        break;

      --str1_size;
      --str2_size;
    }

    std::reverse(res.begin(), res.end());

    return res;
  }
};

int main() {

  Solution s;

  string suffix = s.suffix("tuesday", "monday");
  std::cout << "suffix = " << suffix << std::endl;

  return 0;
}
