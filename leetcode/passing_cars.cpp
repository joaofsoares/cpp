#include <iostream>
#include <vector>

int solution(std::vector<int> &A) {
  int zero{}, cnt{};

  for (int a : A) {
    if (a == 0)
      ++zero;
    else if (zero > 0 && a == 1) {
      cnt += zero;
      if (cnt > 1'000'000'000)
        return -1;
    }
  }

  return cnt;
}

int main() {
  std::vector<int> v{0, 1, 0, 1, 1};
  int res{solution(v)};
  std::cout << "solution: " << res << std::endl;
  return 0;
}
