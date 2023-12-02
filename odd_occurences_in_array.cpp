#include <iostream>
#include <unordered_map>

int solution(std::vector<int> &A) {

  if (A.size() == 1)
    return A[0];

  std::unordered_map<int, int> um;

  for (unsigned i{0}; i < A.size(); ++i) {
    um[A[i]]++;
  }

  std::unordered_map<int, int>::iterator it;
  for (it = um.begin(); it != um.end(); it++) {
    if (it->second % 2 != 0)
      return it->first;
  }

  return 0;
}

int main() {
  std::cout << "main function" << std::endl;

  std::vector<int> ns{9, 3, 9, 3, 9, 7, 9};
  std::cout << solution(ns) << std::endl;

  return 0;
}
