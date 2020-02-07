#include <iostream>
#include <vector>
using namespace std;

#include "solution.h"

int main() {
  vector<int> arr1 = {1, 2, 2, 1, 1, 3};
  vector<int> arr2 = {1, 2};
  vector<int> arr3 = {-3, 0, 1, -3, 1, 1, 1, -3, 10, 0};

  Solution sol;

  cout << sol.uniqueOccurrences(arr1) << endl;
  cout << sol.uniqueOccurrences(arr2) << endl;
  cout << sol.uniqueOccurrences(arr3) << endl;

  return 0;
}