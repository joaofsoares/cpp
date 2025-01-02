#include <cstdio>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::string;
using std::vector;

class Solution {
public:
  int lengthOfLastWord(string s) {

    vector<string> words;

    std::stringstream ss(rtrim(s));

    while (std::getline(ss, s, ' ')) {
      words.push_back(s);
    }

    string last = words.back();
    cout << "last = " << last << endl;

    return last.length();
  }

private:
  std::string rtrim(const std::string &s) {
    const std::string WHITESPACE = " \n\r\t\f\v";
    size_t end = s.find_last_not_of(WHITESPACE);
    return (end == std::string::npos) ? "" : s.substr(0, end + 1);
  }
};

int main() {
  Solution s;

  int res = s.lengthOfLastWord("Hello World");
  cout << "res = " << res << endl;

  res = s.lengthOfLastWord("   fly me   to   the moon  ");
  cout << "res = " << res << endl;

  res = s.lengthOfLastWord("luffy is still joyboy");
  cout << "res = " << res << endl;
  return 0;
}
