#include <algorithm>
#include <iostream>
#include <vector>

using std::vector;

class Solution {
public:
  void quick_sort(vector<int> &nums) { sort(nums, 0, nums.size() - 1); }

private:
  void sort(vector<int> &ns, int low, int high) {
    if (low < high) {
      int pivot = ns[high];
      int pos = partition(ns, low, high, pivot);
      sort(ns, low, pos - 1);
      sort(ns, pos + 1, high);
    }
  }

  int partition(vector<int> &ns, int low, int high, int pivot) {
    int i = low;
    int j = low;

    while (i <= high) {
      if (ns[i] > pivot)
        ++i;
      else {
        swap(ns, i, j);
        ++i;
        ++j;
      }
    }

    return j - 1;
  }

  void swap(vector<int> &ns, int pos1, int pos2) {
    int temp;
    temp = ns[pos1];
    ns[pos1] = ns[pos2];
    ns[pos2] = temp;
  }
};

int main() {
  Solution s;

  vector<int> numbers = {1, 9, 2, 8, 3, 7, 4, 6, 5};
  s.quick_sort(numbers);

  for (int v : numbers)
    std::cout << "value = " << v << std::endl;

  return 0;
}
