#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

class Solution {
public:
  vector<int> twoSum(vector<int> &nums, int target) {
    for (int i = 0; i < nums.size(); ++i) {
      for (int j = 1; j < nums.size(); ++j) {
        if (i != j && nums[i] + nums[j] == target)
          return vector<int>{i, j};
      }
    }

    return vector<int>{};
  }
};

int main() {

  vector<int> ns = {2, 7, 11, 15};

  Solution s;
  auto res = s.twoSum(ns, 9);
  for (int i : res)
    cout << "res = " << i << endl;

  return 0;
}
