#include <cmath>

class Solution {
 public:
  int mySqrt(int x) {
    if (x == 0 || x == 1) return x;
    int lo = 1;
    int hi = x;
    while (lo <= hi) {
      double mid = lo + (hi - lo) / 2;
      if (mid < x / mid) {
        if (mid + 1 > x / (mid + 1))
          return mid;
        else
          lo = mid + 1;
      } else if (mid * mid > x) {
        if (mid - 1 < x / (mid - 1))
          return mid - 1;
        else
          hi = mid - 1;
      } else
        return mid;
    }

    return 0;
  }
};