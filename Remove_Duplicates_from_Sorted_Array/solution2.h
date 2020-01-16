#include <vector>
using namespace std;

class Solution {
 public:
  int removeDuplicates(vector<int>& nums) {
    if (nums.size() == 0) return 0;
    int cnt = 1;
    for (int i = 1; i < nums.size(); ++i) {
      if (nums[i] != nums[i - 1]) {
        nums[cnt++] = nums[i];
      }
    }
    nums.erase(nums.begin() + cnt, nums.end());
    return cnt;
  }
};