#include <vector>
using namespace std;

class Solution {
  int BinarySearch(vector<int>& nums, int target) {
    int lo = 0;
    int hi = nums.size() - 1;
    while (lo <= hi) {
      int mid = lo + (hi - lo) / 2;
      if (target < nums[mid])
        hi = mid - 1;
      else if (target > nums[mid])
        lo = mid + 1;
      else
        return mid;
    }
    return -1;
  }

 public:
  vector<int> searchRange(vector<int>& nums, int target) {
    int index = BinarySearch(nums, target);
    if (index == -1) return {-1, -1};

    int lo = index;
    int hi = index;
    while (lo >= 0 && nums[lo] == target) {
      --lo;
    }
    while (hi <= nums.size() - 1 && nums[hi] == target) {
      ++hi;
    }

    return {lo + 1, hi - 1};
  }
};