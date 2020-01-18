#include <iostream>
using namespace std;

class Solution {
 public:
  int maxSubArray(vector<int>& nums) {
    int this_sum = 0;
    int max_sum = 0;
    int max_val = nums[0];
    for (auto elem : nums) {
      if (elem > max_val) max_val = elem;
      this_sum += elem;
      if (this_sum < 0)
        this_sum = 0;
      else if (this_sum > max_sum)
        max_sum = this_sum;
    }

    return max_val < 0 ? max_val : max_sum;
  }
};