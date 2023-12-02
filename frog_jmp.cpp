#include <iostream>

int solution(int X, int Y, int D) {
  if ((Y - X) % D == 0)
    return (Y - X) / D;

  return (Y - X) / D + 1;
}

int main() {

  std::cout << solution(10, 85, 30) << std::endl;

  return 0;
}
