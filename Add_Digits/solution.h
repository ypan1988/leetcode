class Solution {
  int DigitSum(int num) {
    int sum = 0;
    while (num) {
      sum += num % 10;
      num /= 10;
    }
    return sum;
  }

 public:
  int addDigits(int num) {
    int res = num;
    while (res > 9) {
      res = DigitSum(res);
    }
    return res;
  }
};