#include <algorithm>
#include <vector>
using namespace std;

class Solution {
 public:
  int removeElement(vector<int>& nums, int val) {
    auto iter = partition(nums.begin(), nums.end(),
                          [&](auto elem) { return elem != val; });

    nums.erase(iter, nums.end());

    return nums.size();
  }
};