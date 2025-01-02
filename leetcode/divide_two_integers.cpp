#include <climits>
#include <iostream>

class Solution {
public:
  int divide(int dividend, int divisor) {

    if (divisor == 1) {
      return dividend;
    } else if (dividend < 0 && divisor == -1) {
      long div = (std::abs((long)dividend) + std::abs((long)dividend) -
                  (std::abs((long)dividend)));
      return check_value(div);
    }

    long dd = std::abs((long)dividend);
    long dv = std::abs((long)divisor);

    long modifier = ((dividend < 0) ^ (divisor < 0)) ? -1 : 1;

    long long int res = exp(log(dd) - log(dv)) + 0.0000000001;

    return check_value(res * modifier);
  }

private:
  int check_value(long num) {
    if (num >= INT_MIN && num <= INT_MAX)
      return (int)num;
    else if (num < INT_MIN)
      return INT_MIN;
    else
      return INT_MAX;
  }
};

int main() {
  Solution s;

  int res = s.divide(10, 3);
  std::cout << "res = " << res << std::endl;

  res = s.divide(7, -3);
  std::cout << "res = " << res << std::endl;

  res = s.divide(-10, 2);
  std::cout << "res = " << res << std::endl;

  res = s.divide(-10, -2);
  std::cout << "res = " << res << std::endl;

  res = s.divide(-2147483648, -1);
  std::cout << "res = " << res << std::endl;

  res = s.divide(-2147483648, -2147483648);
  std::cout << "res = " << res << std::endl;

  res = s.divide(-2147483648, 2);
  std::cout << "res = " << res << std::endl;

  return 0;
}
