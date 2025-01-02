#include <iostream>

int main() {
  int sum = 0, val = 50, end = 100;

  while (val <= end) {
    sum += val;
    ++val;
  }

  // exercises

  std::cout << "Sum of 50 to 100 inclusive is " << sum << std::endl;

  std::cout << "Printing numbers from 10 to 0 with while" << std::endl;

  int v2 = 10;
  while (v2 >= 0) {
    std::cout << "Number = " << v2 << std::endl;
    --v2;
  }

  std::cout << "Print range of user insert" << std::endl;
  std::cout << "Enter two numbers:" << std::endl;
  int i1 = 0, i2 = 0;
  std::cin >> i1 >> i2;
  if (i1 >= i2)
    while (i1 >= i2) {
      std::cout << "Number = " << i1 << std::endl;
      --i1;
    }
  else
    while (i1 <= i2) {
      std::cout << "Number = " << i1 << std::endl;
      ++i1;
    }

  return 0;
}
