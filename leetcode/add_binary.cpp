#include <iostream>

using std::string;

class Solution {
public:
  string addBinary(string a, string b) {

    string res = "";

    int a_size = a.size() - 1;
    int b_size = b.size() - 1;
    int tmp = 0;

    while (a_size >= 0 || b_size >= 0 || tmp == 1) {
      tmp += (a_size >= 0) ? a[a_size] - '0' : 0;
      tmp += (b_size >= 0) ? b[b_size] - '0' : 0;
      res = char(tmp % 2 + '0') + res;
      tmp /= 2;
      --a_size;
      --b_size;
    }

    return res;
  }
};

int main() {
  Solution s;

  string res = s.addBinary("11", "1");
  std::cout << "res = " << res << std::endl;

  return 0;
}
