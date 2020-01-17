#include <vector>
using namespace std;

class Solution {
 public:
  int rob(vector<int>& nums) {
    int N = nums.size();
    if (N == 0)
      return 0;
    else if (N == 1)
      return nums[0];

    int prev0 = nums[0];
    int prev1 = max(nums[0], nums[1]);
    int tmp;
    for (int i = 2; i < N; ++i) {
      tmp = prev1;
      prev1 = max(prev1, prev0 + nums[i]);
      prev0 = tmp;
    }
    return prev1;
  }
};