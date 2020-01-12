#include <iostream>
#include <string>
using namespace std;

#include "solution.h"

int main() {
  string str1 = "1.1.1.1";
  string str2 = "255.100.50.0";

  Solution sol;
  cout << sol.defangIPaddr(str1) << endl;
  cout << sol.defangIPaddr(str2) << endl;

  return 0;
}
