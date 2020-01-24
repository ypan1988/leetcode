#include <iostream>
#include <vector>
using namespace std;

#include "solution2.h"

int main() {
  vector<int> ivec = {1, 2, 2, 6, 6, 6, 6, 7, 10};
  Solution sol;
  cout << sol.findSpecialInteger(ivec) << endl;

  return 0;
}