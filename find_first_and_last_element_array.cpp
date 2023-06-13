#include <iostream>
#include <vector>

using std::vector;

class Solution {
public:
  vector<int> searchRange(vector<int> &nums, int target) {

    int first_idx = -1;
    int last_idx = -1;

    if (nums.size() != 0) {
      first_idx = find_first(nums, 0, nums.size() - 1, target);
      if (first_idx != -1)
        last_idx = find_last(nums, 0, nums.size() - 1, target);
    }

    return {first_idx, last_idx};
  }

private:
  int find_first(vector<int> ns, int start, int end, int target) {
    if (end >= start) {
      int m = start + (end - start) / 2;
      if ((m == 0 || target > ns[m - 1]) && ns[m] == target)
        return m;
      else if (target > ns[m]) {
        return find_first(ns, (m + 1), end, target);
      } else {
        return find_first(ns, start, (m - 1), target);
      }
    }
    return -1;
  }

  int find_last(vector<int> ns, int start, int end, int target) {

    if (end >= start) {
      int m = start + (end - start) / 2;
      if ((m == ns.size() - 1 || target < ns[m + 1]) && ns[m] == target)
        return m;
      else if (target < ns[m]) {
        return find_last(ns, start, (m - 1), target);
      } else {
        return find_last(ns, (m + 1), end, target);
      }
    }
    return -1;
  }
};

int main() {
  Solution s;

  // vector<int> test = {5, 7, 7, 8, 8, 10};
  // vector<int> test = {5, 7, 7, 8, 9, 10};
  // vector<int> test = {};
  vector<int> test = {2, 2};

  vector<int> res = s.searchRange(test, 2);

  for (int i : res)
    std::cout << "i = " << i << std::endl;

  return 0;
}
