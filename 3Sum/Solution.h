#include <algorithm>
#include <vector>

using namespace std;

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
      if (i > 0 && nums[i] == nums[i - 1]) continue;
      for (int j = i + 1; j < nums.size(); ++j) {
        if (j > i + 1 && nums[j] == nums[j - 1]) continue;
        int k =
            binary_search(-(nums[i] + nums[j]), nums, j + 1, nums.size() - 1);
        if (k != -1) ans.push_back({nums[i], nums[j], nums[k]});
      }
    }
    return ans;
  }
};