#include <iostream>
#include <vector>
#include "solution.h"

int main() {
  Solution s;
  std::vector<int> ivec = {2, 0, 2, 1, 1, 0};
  s.sortColors(ivec);

  for (auto elem : ivec) {
    std::cout << elem << " ";
  }
  std::cout << std::endl;

  return 0;
}
