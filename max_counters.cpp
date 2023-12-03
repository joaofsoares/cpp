#include <iostream>

std::vector<int> solution(int N, std::vector<int> &A) {
  std::vector<int> counter(N);
  int max{}, bound{};

  for (int n : A)
    if (n <= N) {
      counter[n - 1] = std::max(bound, counter[n - 1]) + 1;
      if (max < counter[n - 1])
        max = std::max(max, counter[n - 1]);
    } else
      bound = max;

  for (int &c : counter)
    if (c < bound)
      c = bound;

  return counter;
}

int main() {
  std::vector<int> input{3, 4, 4, 6, 1, 4, 4};
  std::vector<int> res{solution(5, input)};

  std::cout << "solution: " << std::endl;
  for (int r : res) {
    std::cout << r << " ";
  }
  std::cout << std::endl;

  return 0;
}
