#include <iostream>
#include <numeric>

using std::vector;

class Solution {
public:
  int maximumWealth(vector<vector<int>> &accounts) {

    int acc = 0;

    for (int i = 0; i < accounts.size(); ++i) {
      vector<int> a = accounts[i];

      int tmp = std::accumulate(a.begin(), a.end(), 0);

      acc = std::max(tmp, acc);
    }

    return acc;
  }
};

int main() {
  Solution s;

  // vector<vector<int>> input = {{1, 2, 3}, {3, 2, 1}};
  // vector<vector<int>> input = {{1, 5}, {7, 3}, {3, 5}};
  vector<vector<int>> input = {{2, 8, 7}, {7, 1, 3}, {1, 9, 5}};

  int res = s.maximumWealth(input);
  std::cout << "res = " << res << std::endl;

  return 0;
}
