#include <vector>

using namespace std;

class Solution {
 public:
  int maxProfit(vector<int>& prices) {
    int thissum = 0, maxsum = 0;
    for (int i = 1; i < prices.size(); ++i) {
      int diff = prices[i] - prices[i - 1];
      thissum += diff;
      if (thissum > maxsum)
        maxsum = thissum;
      else if (thissum < 0)
        thissum = 0;
    }
    return maxsum;
  }
};