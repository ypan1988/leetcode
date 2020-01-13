#include <iostream>
#include <vector>
using namespace std;

#include "solution2.h"

int main() {
  vector<int> ivec1 = {12, 345, 2, 6, 7896};
  vector<int> ivec2 = {555, 901, 482, 1771};

  Solution sol;

  cout << sol.findNumbers(ivec1) << endl;
  cout << sol.findNumbers(ivec2) << endl;

  return 0;
}
