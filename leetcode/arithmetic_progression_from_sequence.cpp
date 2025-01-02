#include <iostream>

using std::vector;

class Solution {
public:
  bool canMakeArithmeticProgression(vector<int> &arr) {
    sort(arr.begin(), arr.end());

    int diff = 0;

    for (int i = 0; i < arr.size(); ++i) {
      if (i == 0) {
        diff = arr[i + 1] - arr[i];
        continue;
      }

      if (i + 1 < arr.size()) {
        int tmp = arr[i + 1] - arr[i];
        if (diff != tmp)
          return false;
      }
    }

    return true;
  }
};

int main() {

  Solution s;

  // vector<int> ns = {3, 5, 1};
  vector<int> ns = {-3, -5, -1};

  bool res = s.canMakeArithmeticProgression(ns);

  std::cout << "res = " << res << std::endl;

  return 0;
}
