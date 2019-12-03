#include <iostream>
#include <vector>

#include "solution2.h"

using namespace std;

int main() {
  vector<int> nums = {0, 0, 3, 4};
  int target = 0;
  Solution sol;

  auto ans = sol.twoSum(nums, target);

  if (ans.empty())
    cout << "Not Found!" << endl;
  else {
    cout << nums[ans[0] - 1] << " + " << nums[ans[1] - 1] << " == " << target
         << endl;
  }

  return 0;
}
