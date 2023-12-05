#include <algorithm>
#include <climits>
#include <iostream>

int solution(std::vector<int> &A) {
  int idx{};
  double mn{INT_MAX};

  for (int i{}; i < A.size() - 2; ++i) {
    double d1{(A[i] + A[i + 1] + A[i + 2]) / 3.0};
    double d2{(A[i] + A[i + 1]) / 2.0};
    if (mn > d1 || mn > d2) {
      mn = std::min(d1, d2);
      idx = i;
    }
  }

  if (mn > (A[A.size() - 1] + A[A.size() - 2]) / 2.0)
    return (A.size() - 2);

  return idx;
}

int main() {
  std::vector<int> v{4, 2, 2, 5, 1, 5, 8};
  int res{solution(v)};
  std::cout << "res: " << res << std::endl;
}
