#include <cmath>

class Solution {
  bool is_prime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= sqrt(n); ++i) {
      if (n % i == 0) return false;
    }
    return true;
  }

 public:
  int countPrimes(int n) {
    int cnt = 0;
    for (int i = 0; i != n; ++i) {
      if (is_prime(i)) ++cnt;
    }
    return cnt;
  }
};