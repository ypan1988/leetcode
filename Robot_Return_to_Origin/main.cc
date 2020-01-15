#include <iostream>
#include <string>
using namespace std;

#include "solution2.h"

int main() {
  string str1("UD");
  string str2("LL");

  Solution sol;

  cout << sol.judgeCircle(str1) << endl;
  cout << sol.judgeCircle(str2) << endl;

  return 0;
}