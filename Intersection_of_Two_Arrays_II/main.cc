#include <vector>
#include <iostream>
#include "solution.h"

int main()
{
  Solution s;

  std::vector<int> vec1 = {1,2,2,1};
  std::vector<int> vec2 = {2,2};

  std::vector<int> vec3 = {4,9,5};
  std::vector<int> vec4 = {9,4,9,8,4};

  std::vector<int> res1 = s.intersection(vec1, vec2);
  std::vector<int> res2 = s.intersection(vec3, vec4);

  std::cout << "[";
  for (auto elem : res1) std::cout << elem << " ";
  std::cout << "]" << std::endl;

  std::cout << "[";
  for (auto elem : res2) std::cout << elem << " ";
  std::cout << "]" << std::endl;

  return 0;
}
