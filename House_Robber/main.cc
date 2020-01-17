#include <iostream>
using namespace std;

#include "solution3.h"

int main() {
  vector<int> ivec1 = {1, 2, 3, 1};
  vector<int> ivec2 = {2, 7, 9, 3, 1};
  vector<int> ivec3 = {0};

  Solution sol;

  cout << sol.rob(ivec1) << endl;
  cout << sol.rob(ivec2) << endl;
  cout << sol.rob(ivec3) << endl;

  return 0;
}