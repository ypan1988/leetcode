#include <iostream>
#include <vector>
using namespace std;

#include "solution2.h"

int main() {
  vector<int> ivec1 = {7, 1, 5, 3, 6, 4};
  vector<int> ivec2 = {7, 6, 4, 3, 1};
  Solution sol;

  cout << sol.maxProfit(ivec1) << endl;
  cout << sol.maxProfit(ivec2) << endl;

  return 0;
}