#include <iostream>

std::vector<int> solution(std::string &S, std::vector<int> &P,
                          std::vector<int> &Q) {

  std::vector<int> res{};
  std::vector<int> A(S.size(), 0);
  std::vector<int> C(S.size(), 0);
  std::vector<int> G(S.size(), 0);
  std::vector<int> T(S.size(), 0);

  int a{}, c{}, g{}, t{};

  for (int i{}; i < S.size(); ++i) {
    if (S[i] == 'A')
      ++a;
    else if (S[i] == 'C')
      ++c;
    else if (S[i] == 'G')
      ++g;
    else if (S[i] == 'T')
      ++t;

    A[i] = a;
    C[i] = c;
    G[i] = g;
    T[i] = t;
  }

  for (int i{}; i < P.size(); ++i) {
    if (P[i] == Q[i]) {
      if (S[P[i]] == 'A')
        res.push_back(1);
      else if (S[P[i]] == 'C')
        res.push_back(2);
      else if (S[P[i]] == 'G')
        res.push_back(3);
      else if (S[P[i]] == 'T')
        res.push_back(4);
    } else if (A[P[i]] < A[Q[i]] || S[P[i]] == 'A')
      res.push_back(1);
    else if (C[P[i]] < C[Q[i]] || S[P[i]] == 'C')
      res.push_back(2);
    else if (G[P[i]] < G[Q[i]] || S[P[i]] == 'G')
      res.push_back(3);
    else if (T[P[i]] < T[Q[i]] || S[P[i]] == 'T')
      res.push_back(4);
  }

  return res;
}

int main() {
  std::string input{"CAGCCTA"};
  std::vector<int> v1{2, 5, 0};
  std::vector<int> v2{4, 5, 6};
  std::vector<int> res{solution(input, v1, v2)};
  for (int r : res)
    std::cout << "r: " << r << std::endl;
  return 0;
}
