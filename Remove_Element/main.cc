#include <iostream>
#include <vector>

using namespace std;

#include "solution2.h"

int main() {
  vector<int> ivec1 = {3, 2, 2, 3};
  int ival1 = 3;

  vector<int> ivec2 = {0, 1, 2, 2, 3, 0, 4, 2};
  int ival2 = 2;

  vector<int> ivec3 = {1};

  Solution sol;

  cout << sol.removeElement(ivec1, ival1) << endl;
  cout << sol.removeElement(ivec2, ival2) << endl;
  cout << sol.removeElement(ivec3, 1) << endl;

  return 0;
}