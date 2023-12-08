#include <iostream>
#include <stack>

int solution(std::vector<int> &H) {

  int blocks{};
  std::stack<int> s{};

  for (int i{}; i < H.size(); ++i) {
    while (!s.empty() && s.top() > H[i])
      s.pop();

    if (s.empty()) {
      ++blocks;
      s.push(H[i]);
    } else if (s.top() < H[i]) {
      ++blocks;
      s.push(H[i]);
    }
  }

  return blocks;
}

int main() {
  std::vector<int> heights{8, 8, 5, 7, 9, 8, 7, 4, 8};
  int res{solution(heights)};
  std::cout << "res: " << res << std::endl;
  return 0;
}
