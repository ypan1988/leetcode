#include <iostream>
#include <string>
using namespace std;

#include "solution.h"

int main() {
  string J, S;
  Solution sol;

  J = "aA";
  S = "aAAbbbb";
  cout << sol.numJewelsInStones(J, S) << endl;

  J = "z";
  S = "ZZ";
  cout << sol.numJewelsInStones(J, S) << endl;

  return 0;
}