#include <iostream>
#include <map>

int solution(std::vector<int> &A) {

  std::map<int, int> nums{};

  for (int i{}; i < A.size(); ++i) {
    nums[A[i]]++;
    if (nums[A[i]] > A.size() / 2)
      return i;
  }

  return -1;
}

int main() {
  std::vector<int> v{3, 4, 3, 2, 3, -1, 3, 3};
  int res{solution(v)};
  std::cout << "res: " << res << std::endl;
  return 0;
}
