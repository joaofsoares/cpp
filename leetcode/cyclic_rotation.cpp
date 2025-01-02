#include <iostream>
#include <vector>

void print_vector(const std::vector<int> &ns) {
  for (int n : ns) {
    std::cout << n << " ";
  }
  std::cout << std::endl;
}

std::vector<int> solution(std::vector<int> &A, int K) {
  unsigned long size{A.size()};
  if (K >= 1 && K <= 100 && size >= 1 && size <= 100) {

    K = (size + K % size) % size;

    for (int i{0}; i < K; ++i) {
      int last = A.back();
      A.pop_back();
      A.insert(A.begin(), last);
    }
  }

  return A;
}

int main() {
  std::cout << "main function" << std::endl;

  std::vector<int> ns{3, 8, 9, 7, 6};
  print_vector(ns);
  std::vector<int> res{solution(ns, 3)};
  print_vector(res);

  unsigned long rotations{(ns.size() + 7 % ns.size()) % ns.size()};
  std::cout << "rotations: " << rotations << std::endl;

  return 0;
}
