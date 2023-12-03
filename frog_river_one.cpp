#include <iostream>
#include <unordered_map>
#include <vector>

int solution(int X, std::vector<int> &A) {
  std::unordered_map<int, bool> um{};

  for (int i{}; i < A.size(); ++i) {
    um[A[i]] = true;
    if (um.size() == X)
      return i;
  }

  return -1;
}

int main() {
  std::vector<int> jumps{1, 3, 1, 4, 2, 3, 5, 4};
  int res{solution(5, jumps)};
  std::cout << "solution: " << res << std::endl;
  return 0;
}
