#include <iostream>
#include <unordered_map>

int solution(std::vector<int> &A) {
  if (A.empty() || A.size() == 1)
    return 0;

  std::unordered_map<int, int> counter{};

  size_t half{A.size() / 2};
  int leader{-1}, leader_total{};

  for (int i{}; i < A.size(); ++i) {
    counter[A[i]]++;
    if (counter[A[i]] > half) {
      leader = A[i];
      leader_total = counter[A[i]];
    }
  }

  if (leader == -1)
    return 0;

  int S{}, leader_counter{};

  for (int i{}; i < A.size(); ++i) {
    if (A[i] == leader)
      ++leader_counter;

    int left_leader{(i + 1) / 2};
    unsigned long right_leader{(A.size() - i - 1) / 2};
    if (leader_counter > left_leader &&
        (leader_total - leader_counter) > right_leader)
      ++S;
  }

  return S;
}

int main() {
  std::vector<int> v{4, 3, 4, 4, 4, 2};
  int res{solution(v)};
  std::cout << "res: " << res << std::endl;
  return 0;
}
