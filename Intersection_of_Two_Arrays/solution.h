#include <algorithm>
#include <vector>

class Solution {
public:
  std::vector<int> intersection(std::vector<int>& nums1, std::vector<int>& nums2) {
    std::sort(nums1.begin(), nums1.end());
    std::sort(nums2.begin(), nums2.end());

    std::vector<int> res;
    auto iter1 = nums1.cbegin(), iter2 = nums2.cbegin();
    while(iter1 != nums1.cend() && iter2 != nums2.cend()) {
      if (*iter1 == *iter2) {
	if (res.empty() || *iter1 != res.back()) res.push_back(*iter1);
	++iter1;
	++iter2;
      } else if (*iter1 < *iter2) {
	++iter1;
      } else {
	++iter2;
      }
    }

    return res;
  }
};
