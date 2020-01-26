#include <iostream>
using namespace std;

#include "solution.h"

int main() {
  Solution sol;
  auto res = sol.diStringMatch("IDID");
  for (auto elem : res) cout << elem;
  cout << endl;

  return 0;
}