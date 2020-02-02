#include <iostream>
#include <vector>
using namespace std;

#include "solution.h"

int main() {
  vector<int> candies1 = {1, 1, 2, 2, 3, 3};
  vector<int> candies2 = {1, 1, 2, 3};

  Solution sol;

  cout << sol.distributeCandies(candies1) << endl;
  cout << sol.distributeCandies(candies2) << endl;

  return 0;
}