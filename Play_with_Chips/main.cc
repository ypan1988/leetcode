#include <iostream>
#include <vector>
using namespace std;

#include "solution.h"

int main() {
  vector<int> chips1 = {1, 2, 3};
  vector<int> chips2 = {2, 2, 2, 3, 3};

  Solution sol;

  cout << sol.minCostToMoveChips(chips1) << endl;
  cout << sol.minCostToMoveChips(chips2) << endl;

  return 0;
}