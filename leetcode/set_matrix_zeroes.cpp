#include <iostream>

using std::vector;

class Solution {
public:
  void setZeroes(vector<vector<int>> &matrix) {

    int rows = matrix.size();
    int cols = matrix[0].size();

    vector<std::pair<int, int>> places = {};

    for (int i = 0; i < rows; ++i) {
      for (int j = 0; j < cols; ++j) {
        if (matrix[i][j] == 0) {
          places.push_back(std::make_pair(i, j));
        }
      }
    }

    for (int i = 0; i < places.size(); ++i) {
      int row = places[i].first;
      int col = places[i].second;

      // vertical
      for (int i = 0; i < cols; ++i) {
        if (matrix[row][i] != 0)
          matrix[row][i] = 0;
      }

      // horizontal
      for (int i = 0; i < rows; ++i) {
        if (matrix[i][col] != 0)
          matrix[i][col] = 0;
      }
    }
  }
};

int main() {
  Solution s;

  // vector<vector<int>> m = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
  vector<vector<int>> m = {{0, 1, 2, 0}, {3, 4, 5, 2}, {1, 3, 1, 5}};

  s.setZeroes(m);

  for (int i = 0; i < m.size(); ++i) {
    vector<int> ma = m[0];
    for (int j = 0; j < ma.size(); ++j) {
      std::cout << m[i][j];
    }
    std::cout << std::endl;
  }

  return 0;
}
