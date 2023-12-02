#include <bitset>
#include <cmath>
#include <iostream>

std::string convert_to_binary(const int &num) {
  int n{(int)(std::log2(num))};
  return std::bitset<64>(num).to_string().substr(64 - n - 1);
}

int solution(int N) {

  if (N >= 1 && N <= 2147483647) {

    std::string binary{convert_to_binary(N)};

    int zero_counter{0};
    int gap{0};

    for (char c : binary) {
      if (c == '0')
        ++zero_counter;
      else if (c == '1') {
        gap = std::max(zero_counter, gap);
        zero_counter = 0;
      }
    }

    return gap;
  }

  return 0;
}

int main() {

  std::cout << solution(529) << std::endl;  // 4
  std::cout << solution(20) << std::endl;   // 1
  std::cout << solution(15) << std::endl;   // 0
  std::cout << solution(32) << std::endl;   // 0
  std::cout << solution(1041) << std::endl; // 5

  return 0;
}
