#include <iostream>

using std::string;
using std::vector;

class Solution {
public:
  int calPoints(vector<string> &operations) {

    vector<int> records = {};

    for (string s : operations) {
      if (s == "+" && records.size() > 0) {
        int sum = 0;
        int two_last = records.size() - 2;
        while (two_last < records.size()) {
          sum += records[two_last];
          ++two_last;
        }
        records.push_back(sum);
      } else if (s == "D") {
        int l = records.back();
        records.push_back(l * 2);
      } else if (s == "C")
        records.pop_back();
      else
        records.push_back(std::stoi(s));
    }

    int res = 0;

    for (int r : records)
      res += r;

    return res;
  }
};

int main() {
  Solution s;

  // vector<string> ops = {"5", "2", "C", "D", "+"};
  // vector<string> ops = {"5", "-2", "4", "C", "D", "9", "+", "+"};
  vector<string> ops = {"1", "C"};

  int res = s.calPoints(ops);

  std::cout << "res = " << res << std::endl;

  return 0;
}
