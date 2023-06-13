#include <iostream>
#include <unordered_set>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

class Solution {
public:
  int removeDuplicates(vector<int> &nums) {
    int rem = 0, result;
    vector<int> res;

    for (int i = 0; i < nums.size(); ++i) {
      if (i + 1 < nums.size() && nums[i] == nums[i + 1]) {
        ++rem;
      } else {
        res.push_back(nums[i]);
      }
    }

    result = res.size();

    if (rem > 0) {
      for (int i = 0; i < rem; ++i) {
        res.push_back(-1);
      }
    }

    nums = res;

    return result;
  }
};

int main() {

  vector<int> nums = {1, 1, 2};

  Solution s;

  int res = s.removeDuplicates(nums);

  cout << "i = " << res << endl;

  for (int n : nums)
    cout << "n = " << n << endl;

  return 0;
}
