#include <iostream>
#include <string>

using std::string;

class Solution {
public:
  string longestPalindrome(string s) {

    int n = s.length();
    string tmp = "";

    for (int i = 0; i < n; ++i) {
      int j = n - 1;
      while (i < j) {
        if (s[i] == s[j] && tmp.length() < (j - i + 1)) {
          string sub_str = s.substr(i, (j - i + 1));
          if (is_palindrome(sub_str))
            tmp = sub_str;
        }
        --j;
      }
    }

    if (tmp.length() == 0) {
      tmp = s[0];
    }

    return tmp;
  }

private:
  bool is_palindrome(string str) {
    string tmp = str;
    std::reverse(str.begin(), str.end());
    return str == tmp;
  }
};

int main() {
  Solution s;

  string res = s.longestPalindrome("babad");
  std::cout << "res = " << res << std::endl;

  res = s.longestPalindrome("cbbd");
  std::cout << "res = " << res << std::endl;

  res = s.longestPalindrome("a");
  std::cout << "res = " << res << std::endl;

  res = s.longestPalindrome("");
  std::cout << "res = " << res << std::endl;

  res = s.longestPalindrome("ac");
  std::cout << "res = " << res << std::endl;

  res = s.longestPalindrome(
      "vbpgvehmsdocuqfnpzsqqsjbjkvzpqsubqbpjhzojdtkjcambviauhsxqvejgehzrhhvrgul"
      "ubmirbppvbkftvazscxifsxtoarrdeyuihzcenqendvnthfdpotgpegdlaildigloesnfxkj"
      "ichsxygazrvgbecuzkcdrgextmysxqerrueecpneynciasevytmatvqgleipwlaxwgajijku"
      "ceezmbtiigc");
  std::cout << "res = " << res << std::endl;

  return 0;
}
