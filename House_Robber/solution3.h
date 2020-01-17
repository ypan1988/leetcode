#include <vector>
using namespace std;

class Solution {
  vector<int> memo;

 public:
  int rob(vector<int>& nums) {
    int N = nums.size();
    if (N == 0)
      return 0;
    else if (N == 1)
      return nums[0];

    memo = vector<int>(N, -1);
    memo[0] = nums[0];
    memo[1] = max(nums[0], nums[1]);
    for (int i = 2; i < N; ++i) {
      memo[i] = max(memo[i - 1], memo[i - 2] + nums[i]);
    }
    return memo[N - 1];
  }
};