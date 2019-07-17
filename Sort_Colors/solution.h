#include <vector>
using std::vector;

class Solution {
 public:
  void sortColors(vector<int>& nums) {
    int n = nums.size();
    for (int i  = 1, j; i < n; ++i) {
      int tmp = nums[i];
      for (j = i; j > 0 && nums[j-1] > tmp; --j) {
        nums[j] = nums[j - 1];
      }
      nums[j] = tmp;
    }
  }
};
