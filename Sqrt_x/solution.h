#include <cmath>

class Solution {
 public:
  int mySqrt(int x) {
    double res = x;
    while (fabs(res * res - x) > 1e-4) {
      res = res - (res * res - x) / (2 * res);
    }
    return res;
  }
};
