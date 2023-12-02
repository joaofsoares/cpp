#include <iostream>
#include <vector>

void bubble_sort(std::vector<int> &ns) {
  for (int i{0}; i < ns.size(); ++i) {
    bool swapped{false};

    for (int j{0}; j < (ns.size() - i) - 1; ++j) {
      if (ns[j] > ns[j + 1]) {
        int tmp{ns[j]};
        ns[j] = ns[j + 1];
        ns[j + 1] = tmp;

        swapped = true;
      }
    }

    if (!swapped)
      break;
  }
}

void print_vector(const std::vector<int> &ns) {
  for (int n : ns) {
    std::cout << n << " ";
  }
  std::cout << std::endl;
}

int main() {
  std::vector<int> test_1{8, 4, 5, 2, 1, 5};
  print_vector(test_1);
  bubble_sort(test_1);
  print_vector(test_1);

  return 0;
}
