#include <algorithm>
#include <iostream>

int solution(std::vector<int> &A) {

  std::sort(A.begin(), A.end());

  if (A.size() == 1 && A[0] == 1)
    return 2;
  else if (A.size() == 1 && A[0] != 1)
    return 1;

  int res{1};
  bool has_one{false};

  for (int i{0}; i < A.size(); ++i) {
    if (A[i] <= 0)
      continue;
    else if (A[i] == 1)
      has_one = true;
    else if (A[i] == A[i + 1])
      continue;
    else if (i + 1 < A.size() && A[i] + 1 == A[i + 1])
      continue;
    else if (has_one)
      return A[i] + 1;
    else
      break;
  }

  return res;
}

int solution_two(std::vector<int> &A) {
  std::sort(A.begin(), A.end());
  int n{1};

  for (int a : A) {
    if (n == a)
      ++n;
  }

  return n;
}

int main() {
  // std::vector<int> v{1, 2, 3};
  // std::vector<int> v{-1, -3};
  std::vector<int> v{1, 3, 6, 4, 1, 2};
  int res{solution(v)};
  std::cout << "res: " << res << std::endl;
  int res2{solution_two(v)};
  std::cout << "res two: " << res2 << std::endl;
  return 0;
}
