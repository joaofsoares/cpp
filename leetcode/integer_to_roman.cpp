#include <iostream>
#include <string>

using std::string;

class Solution {
public:
  string intToRoman(int num) {
    string res = "";

    if (num >= 1000) {
      res += "M" + intToRoman(num - 1000);
    } else if (num >= 900) {
      res += "CM" + intToRoman(num - 900);
    } else if (num >= 500) {
      res += "D" + intToRoman(num - 500);
    } else if (num >= 400) {
      res += "CD" + intToRoman(num - 400);
    } else if (num >= 100) {
      res += "C" + intToRoman(num - 100);
    } else if (num >= 90) {
      res += "XC" + intToRoman(num - 90);
    } else if (num >= 50) {
      res += "L" + intToRoman(num - 50);
    } else if (num >= 40) {
      res += "XL" + intToRoman(num - 40);
    } else if (num >= 10) {
      res += "X" + intToRoman(num - 10);
    } else if (num >= 9) {
      res += "IX" + intToRoman(num - 9);
    } else if (num >= 5) {
      res += "V" + intToRoman(num - 5);
    } else if (num >= 4) {
      res += "IV" + intToRoman(num - 4);
    } else if (num > 0) {
      res += "I" + intToRoman(num - 1);
    }

    return res;
  }
};

int main() {
  Solution s;

  // string res = s.intToRoman(3);

  string res = s.intToRoman(1994);

  std::cout << "res = " << res << std::endl;

  return 0;
}
