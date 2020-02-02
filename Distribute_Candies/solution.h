#include <algorithm>
#include <vector>
using namespace std;

class Solution {
 public:
  int distributeCandies(vector<int>& candies) {
    sort(candies.begin(), candies.end());
    int sz = candies.size();
    candies.erase(unique(candies.begin(), candies.end()), candies.end());
    return min((int)candies.size(), sz / 2);
  }
};