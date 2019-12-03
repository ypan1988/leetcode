#include <algorithm>
#include <vector>

using namespace std;

class Solution {
 public:
  vector<vector<int>> fourSum(vector<int>& nums, int target) {
    sort(nums.begin(), nums.end());

    vector<vector<int>> ans;
    for (int i = 0; i < nums.size(); ++i) {
      if (i > 0 && nums[i] == nums[i - 1]) continue;
      for (int j = i + 1; j < nums.size(); ++j) {
        if (j > i + 1 && nums[j] == nums[j - 1]) continue;
        int lo = j + 1;
        int hi = nums.size() - 1;
        int target2 = target - nums[i] - nums[j];

        while (lo < hi) {
          int sum = nums[lo] + nums[hi];
          if (sum < target2)
            ++lo;
          else if (sum > target2)
            --hi;
          else {
            ans.push_back({nums[i], nums[j], nums[lo], nums[hi]});
            while (lo < hi && nums[lo] == nums[lo + 1]) ++lo;
            while (lo < hi && nums[hi] == nums[hi - 1]) --hi;
            ++lo;
            --hi;
          }
        }
      }
    }
    return ans;
  }
};