#include <algorithm>
#include <iostream>
#include <vector>

using std::vector;

class Solution {
public:
  int removeDuplicates(vector<int> &nums) {

    int n_size = nums.size();

    if (n_size == 0) {
      return 0;
    }

    int cnt = 0, rep = 0, stop = 0;

    int i = 0;
    while (i < n_size) {

      if (i == n_size - stop) {
        break;
      }

      if (i == 0) {
        ++i;
        ++cnt;
        continue;
      }

      if (nums[i] == nums[i - 1] && rep == 0) {
        ++cnt;
        rep = 1;
        ++i;
        continue;
      }

      if (nums[i] == nums[i - 1] && rep > 0) {
        int tmp = nums[i];
        nums.erase(nums.begin() + i);
        nums.push_back(tmp);
        ++stop;
        continue;
      }

      if (nums[i] != nums[i - 1]) {
        rep = 0;
        ++cnt;
      }

      ++i;
    }

    return cnt;
  }
};

int main() {
  Solution s;

  // vector<int> input = {1, 1, 1, 2, 2, 3};
  vector<int> input = {0, 0, 1, 1, 1, 1, 2, 3, 3};

  int res = s.removeDuplicates(input);

  std::cout << "res = " << res << std::endl;

  for (int n : input)
    std::cout << "n = " << n << std::endl;

  return 0;
}
