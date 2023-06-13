#include <iostream>

using std::vector;

class Solution {
public:
  void moveZeroes(vector<int> &nums) {
    int n_size = nums.size();

    for (int i = 0; i < n_size; ++i) {
      if (nums[i] == 0) {
        for (int j = i + 1; j < n_size; ++j) {
          if (nums[j] != 0) {
            nums[i] = nums[j];
            nums[j] = 0;
            break;
          }
        }
      }
    }
  }
};

void print_vector(vector<int> nums) {
  for (int n : nums)
    std::cout << "number = " << n << std::endl;
}

int main() {
  Solution s;

  // vector<int> nums = {0, 1, 0, 3, 12};
  vector<int> nums = {0, 0, 1};

  // print_vector(nums);

  s.moveZeroes(nums);

  print_vector(nums);

  return 0;
}
