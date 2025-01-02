#include <iostream>
#include <stack>

int solution(std::string &S) {
  if (S.empty())
    return 1;

  std::stack<char> cs{};

  for (char c : S) {
    if (c == '(' || c == '[' || c == '{')
      cs.push(c);
    else if ((c == ')' && cs.top() == '(') || (c == ']' && cs.top() == '[') ||
             (c == '}' && cs.top() == '{'))
      cs.pop();
    else
      return 0;
  }

  return (cs.empty()) ? 1 : 0;
}

int main() {
  std::string s{"{[()()]}"};
  // std::string s{"{[()]}"};
  // std::string s{"([)()]"};
  int res{solution(s)};
  std::cout << "res: " << res << std::endl;
  return 0;
}
