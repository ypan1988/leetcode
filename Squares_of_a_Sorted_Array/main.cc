#include <iostream>
#include <vector>
using namespace std;

#include "solution.h"

int main() {
  vector<int> ivec1 = {-4, -1, 0, 3, 10};
  vector<int> ivec2 = {-7, -3, 2, 3, 11};

  Solution sol;
  auto res1 = sol.sortedSquares(ivec1);
  auto res2 = sol.sortedSquares(ivec2);

  for (auto elem : res1) cout << elem << " ";
  cout << endl;

  for (auto elem : res2) cout << elem << " ";
  cout << endl;

  return 0;
}