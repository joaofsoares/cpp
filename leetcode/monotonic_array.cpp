#include <iostream>

using std::vector;

class Solution {
public:
  bool isMonotonic(vector<int> &nums) {
    int n_size = nums.size();
    int ord = 0;

    for (int i = 0; i < n_size; ++i) {
      if (i + 1 < n_size) {

        int curr = nums[i];
        int next = nums[i + 1];

        if (curr < next && ord == 0)
          ord = 1;
        else if (curr > next && ord == 0)
          ord = -1;

        if (ord == 0)
          continue;

        if (ord > 0 && curr > next) {
          return false;
        }

        if (ord < 0 && curr < next) {
          return false;
        }
      }
    }

    return true;
  }
};

int main() {
  Solution s;

  // vector<int> ns = {1, 2, 2, 3};
  //  vector<int> ns = {6, 5, 4, 4};
  //   vector<int> ns = {1, 3, 2};
  // vector<int> ns = {1, 1, 1, 1};
  // vector<int> ns = {2, 2, 2, 2, 2, 2, 1};
  // vector<int> ns = {1, 1, 1, 1, 2};
  vector<int> ns = {1, 2, 3, 4, 9, 8, 7, 6};

  bool res = s.isMonotonic(ns);

  std::cout << "res = " << res << std::endl;

  return 0;
}
