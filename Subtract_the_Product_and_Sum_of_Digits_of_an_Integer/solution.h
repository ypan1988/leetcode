class Solution {
 public:
  int subtractProductAndSum(int n) {
    int prod = 1;
    int sum = 0;
    while (n) {
      int val = n % 10;
      n /= 10;

      prod *= val;
      sum += val;
    }
    return prod - sum;
  }
};
