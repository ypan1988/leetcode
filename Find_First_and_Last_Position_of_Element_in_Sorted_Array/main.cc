#include <iostream>
#include <vector>
using namespace std;

#include "solution.h"

int main() {
  vector<int> ivec1 = {5, 7, 7, 8, 8, 10};
  int ival1 = 8;

  vector<int> ivec2 = {5, 7, 7, 8, 8, 10};
  int ival2 = 6;

  Solution sol;
  auto res1 = sol.searchRange(ivec1, ival1);
  for (auto elem : res1) {
    cout << elem << " ";
  }
  cout << endl;

  auto res2 = sol.searchRange(ivec2, ival2);
  for (auto elem : res2) {
    cout << elem << " ";
  }
  cout << endl;

  return 0;
}