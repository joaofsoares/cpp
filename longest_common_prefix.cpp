#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::string;
using std::vector;

class Solution {
public:
  string longestCommonPrefix(vector<string> &strs) {

    string prefix = strs[0];

    for (int i = 1; i < strs.size(); ++i) {
      string curr = strs[i], tmp_prefix;
      for (int j = 0; j < curr.length(); ++j) {
        if (prefix[j] == curr[j])
          tmp_prefix += curr[j];
        else
          break;
      }
      prefix = tmp_prefix;
    }

    return prefix;
  }
};

int main() {
  Solution s;

  vector<string> words = {"flower", "flow", "flight"};
  // vector<string> words = {"dog", "racecar", "car"};
  //  vector<string> words = {"cir", "car"};

  string res = s.longestCommonPrefix(words);
  cout << "res = " << res << endl;

  return 0;
}
