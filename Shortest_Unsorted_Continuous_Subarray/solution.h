#include <algorithm>
#include <vector>
using namespace std;

class Solution {
 public:
  int findUnsortedSubarray(vector<int>& nums) {
    vector<int> copy(nums);
    sort(copy.begin(), copy.end());
    int i, j;
    for (i = 0; i < nums.size(); ++i) {
      if (nums[i] != copy[i]) break;
    }

    if (i == nums.size()) return 0;
    for (j = nums.size() - 1; j > i; --j) {
      if (nums[j] != copy[j]) break;
    }

    return j - i + 1;
  }
};