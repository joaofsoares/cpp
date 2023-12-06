#include <algorithm>
#include <climits>
#include <iostream>

int solution(std::vector<int> &A) {
  int a{INT_MIN};
  int b{INT_MIN};
  int c{INT_MIN};

  int d{INT_MAX};
  int e{INT_MAX};

  for (int x : A) {

    if (d > x) {
      e = d;
      d = x;
    } else if (e > x) {
      e = x;
    }

    if (a < x) {
      c = b;
      b = a;
      a = x;
    } else if (b < x) {
      c = b;
      b = x;
    } else if (c < x) {
      c = x;
    }
  }

  return std::max(a * b * c, d * e * a);
}

int solution2(std::vector<int> &A) {
  std::sort(A.begin(), A.end());
  int s = A.size();
  int cnt1{A[s - 1] * A[0] * A[1]};
  int cnt2{A[s - 1] * A[s - 2] * A[s - 3]};
  return std::max(cnt1, cnt2);
}

int main() {
  std::vector<int> input{-3, 1, 2, -2, 5, 6};
  int res{solution(input)};
  std::cout << "res: " << res << std::endl;
  return 0;
}
