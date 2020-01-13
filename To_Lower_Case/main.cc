#include <iostream>
using namespace std;

#include "solution.h"

int main() {
  string str1("Hello");
  string str2("here");
  string str3("LOVELY");

  Solution sol;

  cout << sol.toLowerCase(str1) << endl;
  cout << sol.toLowerCase(str2) << endl;
  cout << sol.toLowerCase(str3) << endl;

  return 0;
}
