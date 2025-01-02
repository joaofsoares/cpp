#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int solution(std::vector<int> &A) {
  std::vector<int> left{};
  std::vector<int> right{};
  long cnt{};
  int j{};

  for (int i{}; i < A.size(); ++i) {
    left.push_back(i - A[i]);
    right.push_back(i + A[i]);
  }

  std::sort(left.begin(), left.end());
  std::sort(right.begin(), right.end());

  for (int i{}; i < A.size(); ++i) {
    while (j < A.size() && right[i] >= left[j]) {
      cnt += (j - i);
      ++j;
    }

    if (cnt > 10'000'000)
      return -1;
  }

  return cnt;
}

int solution2(vector<int> &A) {
  vector<int64_t> lhes;
  vector<int64_t> rhes;
  long N = A.size();
  for (size_t i = 0; i < N; i++) {
    long lhs = static_cast<long>(i) - A[i];
    lhes.push_back(lhs);
    long rhs = A[i] + static_cast<long>(i);
    rhes.push_back(rhs);
  }

  std::sort(lhes.begin(), lhes.end());
  std::sort(rhes.begin(), rhes.end());

  long count = 0;
  count -= (N + 1) * N / 2;
  size_t rhIndex = 0;

  for (size_t i = 0; i < lhes.size(); i++) {
    int64_t lhs = lhes[i];
    while (rhes[rhIndex] < lhs)
      rhIndex++;
    if (rhIndex == rhes.size())
      break;
    count += rhes.size() - rhIndex;
    if (count > 10'000'000)
      return -1;
  }

  return static_cast<int>(count);
}

int main() {
  // std::vector<int> discs{1, 5, 2, 1, 4, 0};
  std::vector<int> discs{1, 2147483647, 0};
  int res1{solution(discs)};
  int res2{solution2(discs)};
  std::cout << "res1: " << res1 << std::endl;
  std::cout << "res2: " << res2 << std::endl;
  return 0;
}
