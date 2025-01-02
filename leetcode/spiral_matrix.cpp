#include <iostream>

using std::vector;

class Solution {
public:
  vector<int> spiralOrder(vector<vector<int>> &matrix) {

    vector<int> res = {};

    int row_size = matrix.size();
    int col_size = matrix[0].size();

    int up = 0, down = row_size - 1, left = 0, right = col_size - 1;

    int dir = 1;

    while (up <= down && left <= right) {

      if (dir == 1) {
        for (int i = left; i <= right; ++i) {
          res.push_back(matrix[up][i]);
        }
        ++up;
        dir = 2;
      } else if (dir == 2) {
        for (int i = up; i <= down; ++i) {
          res.push_back(matrix[i][right]);
        }
        --right;
        dir = 3;
      } else if (dir == 3) {
        for (int i = right; i >= left; --i) {
          res.push_back(matrix[down][i]);
        }
        --down;
        dir = 4;
      } else if (dir == 4) {
        for (int i = down; i >= up; --i) {
          res.push_back(matrix[i][left]);
        }
        ++left;
        dir = 1;
      }
    }

    return res;
  }
};

int main() {
  Solution s;

  vector<vector<int>> m = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

  vector<int> res = s.spiralOrder(m);

  for (int i = 0; i < res.size(); ++i)
    std::cout << "res = " << res[i] << std::endl;

  return 0;
}
