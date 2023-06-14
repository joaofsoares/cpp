#include <iostream>

using std::vector;

class Solution {
public:
    bool checkStraightLine(vector<vector<int>> &coordinates) {

        int x_diff = coordinates[1][0] - coordinates[0][0];
        int y_diff = coordinates[1][1] - coordinates[0][1];

        for (int i = 0; i < coordinates.size() - 1; ++i) {
            if (x_diff * (coordinates[i + 1][1] - coordinates[i][1]) !=
                y_diff * (coordinates[i + 1][0] - coordinates[i][0])) {
                return false;
            }
        }

        return true;
    }
};

int main() {

    Solution s;

    vector<vector<int>> coords = {{1, 2},
                                  {2, 3},
                                  {3, 4},
                                  {4, 5},
                                  {5, 6},
                                  {6, 7}};

    //vector<vector<int>> coords = {
    //        {1, 1},
    //        {2, 2},
    //        {3, 4},
    //        {4, 5},
    //        {5, 6},
    //        {7, 7}
    //};

    bool res = s.checkStraightLine(coords);
    std::cout << "res = " << res << std::endl;

    return 0;
}
