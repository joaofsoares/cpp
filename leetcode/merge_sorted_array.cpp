#include <iostream>
#include <vector>

using std::vector;

class Solution {
public:
  void merge(vector<int> &nums1, int m, vector<int> &nums2, int n) {

    vector<int> res = {};

    int m_cnt = 0, n_cnt = 0;

    while (m_cnt < m && n_cnt < n) {

      if (nums1[m_cnt] == nums2[n_cnt]) {
        res.push_back(nums1[m_cnt]);
        res.push_back(nums2[n_cnt]);

        ++m_cnt;
        ++n_cnt;
      } else if (nums1[m_cnt] < nums2[n_cnt]) {
        res.push_back(nums1[m_cnt]);
        ++m_cnt;
      } else {
        res.push_back(nums2[n_cnt]);
        ++n_cnt;
      }
    }

    while (m_cnt < m) {
      res.push_back(nums1[m_cnt]);
      ++m_cnt;
    }

    while (n_cnt < n) {
      res.push_back(nums2[n_cnt]);
      ++n_cnt;
    }

    nums1 = res;
  }
};

int main() {
  Solution s;

  // vector<int> v1 = {1, 2, 3, 0, 0, 0};
  // vector<int> v2 = {2, 5, 6};

  vector<int> v1 = {2, 0};
  vector<int> v2 = {1};

  s.merge(v1, 1, v2, 1);

  for (int v : v1)
    std::cout << "v = " << v << std::endl;

  return 0;
}
