#include <iostream>

using std::string;

class Solution {
public:
  string mergeAlternately(string word1, string word2) {

    int w1_cnt = 0, w2_cnt = 0;

    int w1_length = word1.length();
    int w2_length = word2.length();

    string res = "";

    while (w1_cnt < w1_length && w2_cnt < w2_length) {
      res = res + word1[w1_cnt] + word2[w2_cnt];

      ++w1_cnt;
      ++w2_cnt;
    }

    if (w1_cnt < w1_length) {
      res = res + word1.substr(w1_cnt, w1_length);
    }

    if (w2_cnt < w2_length) {
      res = res + word2.substr(w2_cnt, w2_length);
    }

    return res;
  }
};

int main() {
  Solution s;

  string res = s.mergeAlternately("abc", "pqr");
  std::cout << "res = " << res << std::endl;

  res = s.mergeAlternately("ab", "pqrs");
  std::cout << "res = " << res << std::endl;

  res = s.mergeAlternately("abcd", "pq");
  std::cout << "res = " << res << std::endl;

  return 0;
}
