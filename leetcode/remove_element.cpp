#include <iostream>
#include <vector>

using std::vector;

class Solution {
public:
  int removeElement(vector<int> &nums, int val) {

    vector<int> res = {};

    for (int i = 0; i < nums.size(); ++i) {
      if (nums[i] == val)
        continue;

      res.push_back(nums[i]);
    }

    nums = res;

    return nums.size();
  }
};

int main() {
  Solution s;

  vector<int> nums = {3, 2, 2, 3};

  int res = s.removeElement(nums, 3);
  std::cout << "res = " << res << std::endl;

  return 0;
}
