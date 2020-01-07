#include <iostream>
#include <vector>
using namespace std;

#include "solution2.h"

int main() {
  vector<int> ivec1 = {2, 2, 1};
  vector<int> ivec2 = {4, 1, 2, 1, 2};
  Solution sol;

  cout << sol.singleNumber(ivec1) << endl;
  cout << sol.singleNumber(ivec2) << endl;

  return 0;
}