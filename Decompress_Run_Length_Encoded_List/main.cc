#include <iostream>
#include <vector>
using namespace std;

#include "solution2.h"

int main() {
  vector<int> nums = {1, 2, 3, 4};

  Solution sol;
  auto res = sol.decompressRLElist(nums);
  for (auto elem : res) cout << elem << " ";
  cout << endl;

  return 0;
}