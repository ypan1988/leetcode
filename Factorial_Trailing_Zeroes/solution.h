class Solution {
 public:
  int trailingZeroes(int n) {
    int res = 0;
    long tmp = 5;
    while (n >= tmp) {
      res += n / tmp;
      tmp *= 5;
    }
    return res;
  }
};