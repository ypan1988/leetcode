#include <unordered_set>
#include <vector>

using namespace std;

class Solution {
 public:
  int singleNumber(vector<int>& nums) {
    int res = 0;
    for (auto elem : nums) res ^= elem;
    return res;
  }
};