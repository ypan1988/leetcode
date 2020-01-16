#include <iostream>
#include <vector>
using namespace std;

#include "solution2.h"

int main() {
  vector<int> ivec1 = {1, 1, 2};
  vector<int> ivec2 = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};

  Solution sol;

  cout << sol.removeDuplicates(ivec1) << endl;
  for (auto elem : ivec1) {
    cout << elem << " ";
  }
  cout << endl;

  cout << sol.removeDuplicates(ivec2) << endl;
  for (auto elem : ivec2) {
    cout << elem << " ";
  }
  cout << endl;

  return 0;
}