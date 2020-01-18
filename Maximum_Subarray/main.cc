#include <iostream>
#include <vector>
using namespace std;

#include "solution.h"

int main() {
  vector<int> ivec1 = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
  vector<int> ivec2 = {-1, -2, -3};
  Solution sol;
  cout << sol.maxSubArray(ivec1) << endl;
  cout << sol.maxSubArray(ivec2) << endl;

  return 0;
}