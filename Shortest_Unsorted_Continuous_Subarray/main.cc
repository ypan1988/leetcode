#include <iostream>
#include <vector>
using namespace std;

#include "solution.h"

int main() {
  vector<int> ivec1 = {2, 6, 4, 8, 10, 9, 15};
  vector<int> ivec2 = {1, 3, 2, 3, 3};
  vector<int> ivec3 = {1, 2, 3, 4};

  Solution sol;

  cout << sol.findUnsortedSubarray(ivec1) << endl;
  cout << sol.findUnsortedSubarray(ivec2) << endl;
  cout << sol.findUnsortedSubarray(ivec3) << endl;

  return 0;
}