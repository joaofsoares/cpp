#include <cstdlib>
#include <iostream>

int solution(std::vector<int> &A) {

  int fp{A[0]}, sp{};

  for (int i{1}; i < A.size(); ++i)
    sp += A[i];

  int gap{std::abs(fp - sp)};

  for (int i{1}; i < A.size() - 1; ++i) {
    fp += A[i];
    sp -= A[i];
    gap = std::min(gap, std::abs(fp - sp));
  }

  return gap;
}

int main() {
  std::vector<int> v{3, 1, 2, 4, 3};
  // std::vector<int> v{-1000, 1000};
  int res{solution(v)};
  std::cout << "solution: " << res << std::endl;
  return 0;
}
