#include <iostream>
#include <vector>
using namespace std;

#include "solution.h"

int main() {
  vector<int> ivec1 = {1, 2, 3};
  vector<int> ivec2 = {4, 3, 2, 1};
  vector<int> ivec3 = {9, 9, 9};

  Solution sol;

  sol.plusOne(ivec1);
  sol.plusOne(ivec2);
  sol.plusOne(ivec3);

  for (auto elem : ivec1) {
    cout << elem << " ";
  }
  cout << endl;

  for (auto elem : ivec2) {
    cout << elem << " ";
  }
  cout << endl;

  for (auto elem : ivec3) {
    cout << elem << " ";
  }
  cout << endl;

  return 0;
}