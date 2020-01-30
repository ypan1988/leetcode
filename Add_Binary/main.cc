#include <iostream>
#include <string>
using namespace std;

#include "solution.h"

int main() {
  string a, b;
  Solution sol;

  a = "11";
  b = "1";

  cout << sol.addBinary(a, b) << endl;

  a = "1010";
  b = "1011";

  cout << sol.addBinary(a, b) << endl;

  return 0;
}