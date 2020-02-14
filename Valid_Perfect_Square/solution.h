#include <cmath>

class Solution {
 public:
  bool isPerfectSquare(int num) {
    double res = num;
    while (fabs(res * res - num) > 1e-4) {
      res = res - fabs(res * res - num) / (2 * res);
    }

    return (pow((int)res, 2) == num);
  }
};