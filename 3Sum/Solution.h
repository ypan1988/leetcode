#include <algorithm>
#include <vector>

class Solution {
 public:
  int binary_search(int key, const vector<int>& ivec, int lo, int hi) {
    while (lo <= hi) {
      int mid = lo + (hi - lo) / 2;
      if (key > ivec[mid])
        lo = mid + 1;
      else if (key < ivec[mid])
        hi = mid - 1;
      else
        return mid;
    }
    return -1;
  }
  vector<vector<int>> threeSum(vector<int>& nums) {
    sort(nums.begin(), nums.end());

    vector<vector<int>> ans;
    for (int i = 0; i < nums.size(); ++i) {
      for (int j = i + 1; j < nums.size(); ++j) {
        int k =
            binary_search(-(nums[i] + nums[j]), nums, j + 1, nums.size() - 1);
        if (k == -1) continue;
        if (!ans.empty()) {
          vector<int> back = ans.back();
          if (back[0] == nums[i] && back[1] == nums[j] && back[2] == nums[k])
            continue;
        }
        ans.push_back({nums[i], nums[j], nums[k]});
      }
    }
    return ans;
  }
};
