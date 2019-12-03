#include <iostream>
#include <vector>
using namespace std;

#include "Solution2.h"

int main() {
  Solution s;
  vector<int> nums = {-1, 0, 1, 2, -1, -4};
  vector<vector<int>> res = s.threeSum(nums);

  vector<int> nums2 = {0, 0, 0, 0};
  vector<vector<int>> res2 = s.threeSum(nums2);

  for (const auto &vec : res) {
    for (auto elem : vec) {
      cout << elem << " ";
    }
    cout << endl;
  }

  cout << "---------------------" << endl;

  for (const auto &vec : res2) {
    for (auto elem : vec) {
      cout << elem << " ";
    }
    cout << endl;
  }

  return 0;
}
