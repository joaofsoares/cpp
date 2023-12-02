#include <iostream>

int solution(std::vector<int> &A) {
  if (A.size() == 0)
    return 1;
  else {
    unsigned long tmp{((A.size() + 1) * (A.size() + 2)) / 2};
    std::vector<int>::iterator it;
    for (it = A.begin(); it != A.end(); it++)
      tmp -= *it;
    return tmp;
  }
}

int main() {
  std::cout << "main function" << std::endl;
  std::vector<int> ns{1, 2, 3, 5};
  // std::vector<int> ns{1};
  int res{solution(ns)};
  std::cout << res << std::endl;
  return 0;
}
