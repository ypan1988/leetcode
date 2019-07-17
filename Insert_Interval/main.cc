#include <iostream>
#include <vector>

#include "solution.h"

int main()
{
  Solution s;

  std::vector<std::vector<int>> intervals1 = {{1,3},{6,9}};
  std::vector<int> newInterval1 = {2,5};

  std::vector<std::vector<int>> intervals2 = {{1,2},{3,5},{6,7},{8,10},{12,16}};
  std::vector<int> newInterval2 = {4,8};

  std::vector<std::vector<int>> res1 = s.insert(intervals1, newInterval1);
  std::vector<std::vector<int>> res2 = s.insert(intervals2, newInterval2);

  for(const auto & elem : res1) {
    std::cout << " [" << elem[0] << "," << elem[1] << "] ";
  }
  std::cout << std::endl;

  for(const auto & elem : res2) {
    std::cout << " [" << elem[0] << "," << elem[1] << "] ";
  }
  std::cout << std::endl;

  return 0;
}
