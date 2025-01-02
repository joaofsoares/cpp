#include <algorithm>
#include <iostream>

int solution(std::vector<int> &A) {

  if (A.size() < 3)
    return 0;

  std::sort(A.begin(), A.end());

  for (int i{}; i < A.size() - 2; ++i) {
    if (A[i] > A[i + 2] - A[i + 1])
      return 1;
  }

  return 0;
}

int main() {
  std::vector<int> v{10, 2, 8, 5, 1, 8, 20};
  int res{solution(v)};
  std::cout << "res: " << res << std::endl;
  return 0;
}
