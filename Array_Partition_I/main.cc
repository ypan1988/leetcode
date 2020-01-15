#include <iostream>
#include <vector>
using namespace std;

#include "solution.h"

int main() {
  vector<int> ivec = {1, 4, 3, 2};
  Solution sol;

  cout << sol.arrayPairSum(ivec) << endl;

  return 0;
}