#include <iostream>
#include <stack>

int solution(std::vector<int> &A, std::vector<int> &B) {
  if (A.size() == 0)
    return 0;

  std::stack<int> down{};
  size_t alive{A.size()};

  for (int i{}; i < A.size(); ++i) {
    if (B[i] == 1)
      down.push(A[i]);

    if (B[i] == 0) {
      while (!down.empty()) {
        if (down.top() > A[i]) {
          --alive;
          break;
        } else if (down.top() < A[i]) {
          --alive;
          down.pop();
        }
      }
    }
  }

  return alive;
}

int main() {
  std::vector<int> a{4, 3, 2, 1, 5};
  std::vector<int> b{0, 1, 0, 0, 0};
  int res{solution(a, b)};
  std::cout << "res: " << res << std::endl;
  return 0;
}
