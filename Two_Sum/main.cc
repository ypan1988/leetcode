#include <iostream>
#include <vector>

#include "solution.h"

using namespace std;

int main() {
  vector<int> nums = {2, 7, 11, 15};
  int target = 9;
  Solution sol;

  auto ans = sol.twoSum(nums, target);

  if (ans.empty())
    cout << "Not Found!" << endl;
  else {
    cout << nums[ans[0]] << " + " << nums[ans[1]] << " == " << target << endl;
  }

  return 0;
}