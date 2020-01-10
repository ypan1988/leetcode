#include <iostream>
using namespace std;

#include "solution.h"

int main() {
  Solution sol;
  int val1 = 123;
  int val2 = -123;
  int val3 = 120;

  cout << sol.reverse(val1) << endl;
  cout << sol.reverse(val2, true) << endl;
  cout << sol.reverse(val3) << endl;

  return 0;
}