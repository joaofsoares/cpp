#include <iostream>
#include <vector>

using std::vector;

class Solution {
public:
  vector<int> twoSum(vector<int> &numbers, int target) {
    int i = 0, j = numbers.size() - 1;

    while (i < j) {
      int curr = numbers[i] + numbers[j];
      if (curr == target)
        return {i + 1, j + 1};
      else if (curr > target)
        --j;
      else
        ++i;
    }

    return {};
  }
};

int main() {
  Solution s;

  // vector<int> nums = {2, 7, 11, 15};
  // vector<int> nums = {2, 3, 4};
  vector<int> nums = {-1, 0};

  vector<int> res = s.twoSum(nums, -1);

  for (int i : res)
    std::cout << "i = " << i << std::endl;

  return 0;
}
