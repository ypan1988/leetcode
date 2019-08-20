#include <cmath>
#include <vector>
using std::floor;
using std::vector;

class Solution {
 public:
  double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    int n = nums1.size() + nums2.size();

    double res = 0.0;
    auto iter1 = nums1.cbegin(), iter2 = nums2.cbegin();

    int count = 0;  // number of elems excluded
    int val = 0;
    if (n % 2)
      val = floor(n / 2);
    else
      val = n / 2 - 1;

    while (count < val) {
      if (iter1 != nums1.cend() && iter2 != nums2.cend()) {
        if (*iter1 < *iter2) {
          ++iter1;
        } else {
          ++iter2;
        }
      } else if (iter1 != nums1.cend()) {
        ++iter1;
      } else {
        ++iter2;
      }

      ++count;
    }

    int val1 = 0, val2 = 0;
    if (iter1 != nums1.cend() && iter2 != nums2.cend()) {
      val1 = *iter1 < *iter2 ? *iter1++ : *iter2++;
    } else if (iter1 != nums1.cend())
      val1 = *iter1++;
    else
      val1 = *iter2++;

    if (n % 2) {
      res = val1;
    } else {
      if (iter1 != nums1.cend() && iter2 != nums2.cend()) {
        val2 = *iter1 < *iter2 ? *iter1++ : *iter2++;
      } else if (iter1 != nums1.cend())
        val2 = *iter1++;
      else
        val2 = *iter2++;

      res = (val1 + val2) / 2.0;
    }

    return res;
  }
};
