#include <iostream>
using namespace std;

#include "solution.h"

int main() {
  int day, month, year;

  Solution sol;

  day = 31, month = 8, year = 2019;
  cout << sol.dayOfTheWeek(day, month, year) << endl;
  day = 18, month = 7, year = 1999;
  cout << sol.dayOfTheWeek(day, month, year) << endl;
  day = 15, month = 8, year = 1993;
  cout << sol.dayOfTheWeek(day, month, year) << endl;

  return 0;
}