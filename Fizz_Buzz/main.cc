#include <iostream>
using namespace std;

#include "solution.h"

int main() {
  Solution sol;

  auto vec = sol.fizzBuzz(15);
  for (auto elem : vec) {
    cout << elem << endl;
  }

  return 0;
}