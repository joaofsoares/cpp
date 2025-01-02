#include <iostream>
#include <unordered_map>

int solution(std::vector<int> &A) {

  if (A.size() == 1)
    return 1;

  std::unordered_map<int, bool> nums;

  for (int i{}; i < A.size(); ++i) {
    if (!nums[A[i]])
      nums[A[i]] = true;
  }

  return nums.size();
}

int main() {
  std::vector<int> v{2, 1, 1, 2, 3, 1};
  int res{solution(v)};
  std::cout << "res: " << res << std::endl;
  return 0;
}
