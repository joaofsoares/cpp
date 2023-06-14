#include <iostream>

using std::vector;

class Solution {
public:
    int largestPerimeter(vector<int> &nums) {
        std::sort(nums.begin(), nums.end(), std::greater<int>());

        int res = 0;

        for (int i = 0; i < nums.size() - 2; ++i) {
            if (nums[i] < nums[i + 1] + nums[i + 2]) {
                res = std::max(res, nums[i] + nums[i + 1] + nums[i + 2]);
                break;
            }
        }

        return res;
    }
};

int main() {
    Solution s;

    //vector<int> perims = {2, 1, 2};
    vector<int> perims = {1, 2, 1, 10};

    int res = s.largestPerimeter(perims);
    std::cout << "res = " << res << std::endl;

    return 0;
}