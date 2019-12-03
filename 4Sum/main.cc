#include <iostream>
#include <vector>
using namespace std;

#include "Solution2.h"

int main() {
  Solution s;
  vector<int> nums = {1, 0, -1, 0, -2, 2};
  vector<vector<int>> res = s.fourSum(nums, 0);

  vector<int> nums2 = {0, 0, 0, 0, 0};
  vector<vector<int>> res2 = s.fourSum(nums2, 0);

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
