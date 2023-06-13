#include <deque>
#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

class Solution {
public:
  vector<int> plusOne(vector<int> &digits) {
    std::deque<int> res;
    int rem = 1;

    for (int i = digits.size() - 1; i >= 0; --i) {
      int d = digits[i] + rem;

      if (d >= 10) {
        res.push_front(0);
      } else {
        res.push_front(d);
        rem = 0;
      }
    }

    if (rem != 0)
      res.push_front(rem);

    return vector<int>(res.begin(), res.end());
  }
};

int main() {
  Solution s;

  vector<int> test = {1, 2, 3};

  vector<int> res = s.plusOne(test);

  for (int i : res)
    cout << "i = " << i << endl;

  return 0;
}
