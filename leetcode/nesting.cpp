#include <iostream>
#include <stack>

int solution(std::string &S) {
  std::stack<char> pars{};

  for (char c : S) {
    if (c == '(')
      pars.push(c);
    else if (pars.empty())
      return 0;
    else if (c == ')' && pars.top() == '(')
      pars.pop();
  }

  return (pars.empty()) ? 1 : 0;
}

int main() {
  std::string s{"(()(())())"};
  // std::string s{"())"};
  int res{solution(s)};
  std::cout << "res: " << res << std::endl;
  return 0;
}
