#include <iostream>
#include <vector>
using namespace std;

#include "solution.h"

int main() {
  int left = 1, right = 22;
  Solution sol;
  auto res = sol.selfDividingNumbers(left, right);
  for (auto elem : res) {
    cout << elem << " ";
  }
  cout << endl;

  return 0;
}