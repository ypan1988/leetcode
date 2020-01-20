#include <vector>
using namespace std;

class Solution {
 public:
  int removeElement(vector<int>& nums, int val) {
    if (nums.empty()) return 0;

    int i = 0;
    int j = nums.size() - 1;
    while (true) {
      while (i <= nums.size() - 1 && nums[i] != val) {
        ++i;
      }
      while (j >= 0 && nums[j] == val) {
        --j;
      }
      if (i >= j) break;
      else swap(nums[i], nums[j]);
    }

    nums.erase(nums.begin() + i, nums.end());

    return nums.size();
  }
};