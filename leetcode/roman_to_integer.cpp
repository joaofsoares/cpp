#include <iostream>
#include <unordered_map>

using std::cout;
using std::endl;
using std::string;

class Solution {
public:
  int romanToInt(string s) {

    int result = 0;
    int cnt = 0;

    while (cnt < s.length()) {
      char c = s[cnt];
      char n = (cnt + 1 < s.length()) ? s[cnt + 1] : (char)0;

      if ((c == 'I' && (n == 'V' || n == 'X')) ||
          (c == 'X' && (n == 'L' || n == 'C')) ||
          (c == 'C' && (n == 'D' || n == 'M'))) {

        result += romanMap[n] - romanMap[c];
        cnt += 2;
      } else {
        result += romanMap[c];
        cnt += 1;
      }
    }

    return result;
  }

private:
  std::unordered_map<char, int> romanMap{{'I', 1},   {'V', 5},   {'X', 10},
                                         {'L', 50},  {'C', 100}, {'D', 500},
                                         {'M', 1000}};
};

int main() {
  Solution s;

  int result = s.romanToInt("III");
  cout << "Result = " << result << endl;

  result = s.romanToInt("LVIII");
  cout << "Result = " << result << endl;

  result = s.romanToInt("MCMXCIV");
  cout << "Result = " << result << endl;

  return 0;
}
