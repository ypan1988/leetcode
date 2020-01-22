#include <iostream>
#include <vector>
using namespace std;

#include "solution.h"

int main() {
  vector<int> ivec1 = {1, 2, 3, 3};
  vector<int> ivec2 = {2, 1, 2, 5, 3, 2};

  Solution sol;
  cout << sol.repeatedNTimes(ivec1) << endl;
  cout << sol.repeatedNTimes(ivec2) << endl;

  return 0;
}