#include <iostream>

int solution(int A, int B, int K) {
  return (A % K == 0) ? (B - A) / K + 1 : (B - (A - A % K)) / K;
}

int main() {
  int res{solution(6, 11, 2)};
  std::cout << "res: " << res << std::endl;
  return 0;
}
