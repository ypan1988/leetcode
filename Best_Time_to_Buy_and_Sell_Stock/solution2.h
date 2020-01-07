#include <climits>

#include <algorithm>
#include <vector>

using namespace std;

class Solution {
 public:
  int maxProfit(vector<int>& prices) {
    int low = INT_MAX;
    int res = 0;
    for (auto val : prices) {
      int val = prices[i];
      if (val < low) low = val;
      res = max(res, val - low);
    }
    return res;
  }
};