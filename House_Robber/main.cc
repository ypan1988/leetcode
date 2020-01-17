#include <iostream>
using namespace std;

#include "solution.h"

int main() {
  vector<int> ivec1 = {1, 2, 3, 1};
  vector<int> ivec2 = {2, 7, 9, 3, 1};

  Solution sol;

  cout << sol.rob(ivec1) << endl;
  cout << sol.rob(ivec2) << endl;

  return 0;
}