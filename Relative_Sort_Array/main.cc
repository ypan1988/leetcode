#include <iostream>
#include <vector>
using namespace std;

#include "Solution.h"

int main() {
  vector<int> arr1 = {2, 3, 1, 3, 2, 4, 6, 7, 9, 2, 19};
  vector<int> arr2 = {2, 1, 4, 3, 9, 6};
  Solution sol;
  auto ans = sol.relativeSortArray(arr1, arr2);

  for (auto elem : ans) cout << elem << " ";
  cout << endl;

  return 0;
}