#include <iostream>
#include <vector>

void print_image(const std::vector<std::vector<int>> &img) {
  for (auto i : img) {
    for (int j : i) {
      std::cout << j << " ";
    }
    std::cout << std::endl;
  }
}

void rotate(std::vector<std::vector<int>> &img) {
  if (img.size() == 0)
    return;

  for (int i{}; i < img.size(); ++i) {
    for (int j{}; j < img[0].size(); ++j) {
      if (i <= j) {
        int tmp = img[i][j];
        img[i][j] = img[j][i];
        img[j][i] = tmp;
      }
    }
  }
  for (int i{}; i < img.size(); ++i) {
    for (int j{}; j < img[0].size() / 2; ++j) {
      std::swap(img[i][j], img[i][img[0].size() - 1 - j]);
    }
  }
}

int main() {
  std::vector<std::vector<int>> v{
      {5, 1, 9, 11}, {2, 4, 8, 10}, {13, 3, 6, 7}, {15, 14, 12, 16}};

  std::cout << "before rotate:" << std::endl;
  print_image(v);

  rotate(v);

  std::cout << "after rotate:" << std::endl;
  print_image(v);

  return 0;
}
