#include <iostream>

int solution(std::vector<int> &A) {

  std::vector<int> left(A.size(), 0);
  std::vector<int> right(A.size(), 0);

  for (int i{1}; i < A.size() - 1; ++i) {
    left[i] = std::max(left[i - 1] + A[i], 0);
  }

  for (size_t i{A.size() - 2}; i > 0; --i) {
    right[i] = std::max(right[i + 1] + A[i], 0);
  }

  int max{};

  for (int i{1}; i < A.size() - 1; ++i) {
    max = std::max(max, left[i - 1] + right[i + 1]);
  }

  return max;
}

int main() {
  std::vector<int> v{3, 2, 6, -1, 4, 5, -1, 2};
  int res{solution(v)};
  std::cout << "res: " << res << std::endl;
  return 0;
}
