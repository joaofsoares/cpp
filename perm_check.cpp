#include <iostream>

int solution(std::vector<int> &A) {

  if ((A.size() == 0) || (A.size() == 1 && A[0] != 1))
    return 0;

  std::sort(A.begin(), A.end());

  for (int i{1}; i < A.size(); ++i) {
    if (A[i] != i + 1)
      return false;
  }

  return true;
}

int main() {

  std::vector<int> perm{4, 1, 2, 3};
  std::cout << "solution: " << solution(perm) << std::endl;

  std::vector<int> nperm{4, 1, 3};
  std::cout << "solution: " << solution(nperm) << std::endl;

  return 0;
}
