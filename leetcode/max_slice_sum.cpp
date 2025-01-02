#include <iostream>

int solution(std::vector<int> &A) {
  int max{A[0]}, sum{A[0]};

  for (int i{1}; i < A.size(); ++i) {
    sum = std::max(sum + A[i], A[i]);
    max = std::max(max, sum);
  }

  return max;
}

int main() {
  std::vector<int> v{3, 2, -6, 4, 0};
  int res{solution(v)};
  std::cout << "res: " << res << std::endl;
  return 0;
}
