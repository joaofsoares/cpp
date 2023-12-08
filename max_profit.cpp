#include <iostream>

int solution(std::vector<int> &A) {

  if (A.empty())
    return 0;

  int best_buy{A[0]};
  int profit{};

  for (int i{1}; i < A.size(); ++i) {
    if (A[i] < best_buy)
      best_buy = A[i];

    profit = std::max(profit, A[i] - best_buy);
  }

  return profit;
}

int main() {
  std::vector<int> v{23171, 21011, 21123, 21366, 21013, 21367};
  int res{solution(v)};
  std::cout << "res: " << res << std::endl;
  return 0;
}
