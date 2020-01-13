#include <iostream>
using namespace std;

#include "solution.h"

int main() {
  int ival1 = 234;
  int ival2 = 4421;

  Solution sol;

  cout << sol.subtractProductAndSum(ival1) << endl;
  cout << sol.subtractProductAndSum(ival2) << endl;

  return 0;
}
