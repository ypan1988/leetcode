#include <vector>
using namespace std;

class Solution {
 public:
  int climbStairs(int n) {
    if (n == 1)
      return 1;
    else if (n == 2)
      return 2;

    vector<int> memo(n + 1, -1);
    memo[1] = 1;
    memo[2] = 2;

    return climbStairs(n, memo);
  }

  int climbStairs(int n, vector<int> &memo) {
    if (memo[n] > 0) return memo[n];

    int result = climbStairs(n - 1, memo) + climbStairs(n - 2, memo);
    memo[n] = result;
    return result;
  }
};