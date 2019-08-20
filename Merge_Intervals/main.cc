#include <iostream>
#include <vector>
#include "solution.h"

int main() {
  Solution s;
  std::vector<std::vector<int>> vvec1 = {{1, 3}, {2, 6}, {8, 10}, {15, 18}};
  std::vector<std::vector<int>> vvec2 = {{1, 4}, {4, 5}};

  std::vector<std::vector<int>> res1 = s.merge(vvec1);
  std::vector<std::vector<int>> res2 = s.merge(vvec2);

  for (const auto& elem : res1) {
    std::cout << " [" << elem[0] << "," << elem[1] << "] ";
  }
  std::cout << std::endl;

  for (const auto& elem : res2) {
    std::cout << " [" << elem[0] << "," << elem[1] << "] ";
  }
  std::cout << std::endl;

  return 0;
}
