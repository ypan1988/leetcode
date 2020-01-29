#include <vector>
using namespace std;

class Solution {
 public:
  vector<int> decompressRLElist(vector<int>& nums) {
    vector<int> res;
    for (int i = 0; i < nums.size() - 1; i = i + 2) {
      int freq = nums[i];
      int ival = nums[i + 1];
      while (freq--) res.push_back(ival);
    }
    return res;
  }
};