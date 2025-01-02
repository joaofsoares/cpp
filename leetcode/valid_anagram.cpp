#include <iostream>

using std::sort;
using std::string;

class Solution {
public:
  bool isAnagram(string s, string t) {

    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

    return s == t;
  }
};

int main() {
  Solution s;

  bool is_anagram = s.isAnagram("anagram", "nagaram");
  std::cout << "is anagram? " << is_anagram << std::endl;

  is_anagram = s.isAnagram("rat", "car");
  std::cout << "is anagram? " << is_anagram << std::endl;

  return 0;
}
