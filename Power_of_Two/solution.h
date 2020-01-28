class Solution {
 public:
  bool isPowerOfTwo(int n) {
    while (n) {
      if (n == 1)
        return true;
      else if (n % 2)
        return false;
      else
        n /= 2;
    }
    return false;
  }
};