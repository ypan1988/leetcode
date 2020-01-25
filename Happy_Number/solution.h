class Solution {
  int DigitsSquareSum(int n) {
    int sum = 0;
    while (n) {
      int digit = n % 10;
      sum += digit * digit;
      n /= 10;
    }
    return sum;
  }

 public:
  bool isHappy(int n) {
    while (true) {
      n = DigitsSquareSum(n);
      if (n == 4) return false;
      if (n == 1) return true;
    }
    return 0;
  }
};