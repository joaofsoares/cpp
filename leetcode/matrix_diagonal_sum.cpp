#include <iostream>
#include <ostream>

using std::vector;

class Solution {
public:
  int diagonalSum(vector<vector<int>> &mat) {

    int m_size = mat.size();
    int mid = (m_size % 2 == 0) ? 0 : mat[m_size / 2][m_size / 2];
    int sum = 0;

    for (int i = 0; i < m_size; ++i) {
      sum += mat[i][i];
    }

    int row = 0;
    for (int i = m_size - 1; i >= 0; --i) {
      sum += mat[row][i];
      ++row;
    }

    return sum - mid;
  }
};

int main() {
  Solution s;

  // vector<vector<int>> m = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  // vector<vector<int>> m = {{1, 2, 3, 1, 3},
  //                         {1, 2, 4, 5, 6},
  //                         {1, 2, 7, 8, 9},
  //                         {1, 2, 1, 2, 3},
  //                         {1, 2, 2, 3, 4}};

  // vector<vector<int>> m = {
  //     {1, 1, 1, 1}, {1, 1, 1, 1}, {1, 1, 1, 1}, {1, 1, 1, 1}};

  vector<vector<int>> m = {{5}};

  int res = s.diagonalSum(m);
  std::cout << "res = " << res << std::endl;

  return 0;
}
