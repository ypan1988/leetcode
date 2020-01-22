#include <iostream>
using namespace std;

#include "solution2.h"

int main() {
  Solution sol;
  cout << sol.romanToInt("III") << endl;
  cout << sol.romanToInt("IV") << endl;
  cout << sol.romanToInt("IX") << endl;
  cout << sol.romanToInt("LVIII") << endl;
  cout << sol.romanToInt("MCMXCIV") << endl;

  return 0;
}