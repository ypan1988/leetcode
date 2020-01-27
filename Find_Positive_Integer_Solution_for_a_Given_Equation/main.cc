#include <iostream>
using namespace std;

#include "solution.h"

int main() {
  CustomFunction fun;
  Solution sol;

  auto res = sol.findSolution(fun, 5);
  for (auto elem : res) {
    cout << "[" << elem[0] << ", " << elem[1] << "], ";
  }
  cout << "\b\b " << endl;

  return 0;
}