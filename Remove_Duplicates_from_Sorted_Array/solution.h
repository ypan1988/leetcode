#include <vector>
using namespace std;

class Solution {
 public:
  int removeDuplicates(vector<int>& nums) {
    if (nums.size() == 0) return 0;
    int cnt = 1;

    auto iter1 = nums.begin();
    auto iter2 = nums.begin();

    int curr_val = *iter1;
    ++iter1;
    ++iter2;

    while (iter1 != nums.end()) {
      if (*iter1 != curr_val) {
        curr_val = *iter1;
        *iter2 = curr_val;
        ++iter2;
        ++cnt;
      }

      ++iter1;
    }

    nums.erase(iter2, nums.end());
    return cnt;
  }
};