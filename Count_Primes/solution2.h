class Solution {
  bool is_prime(int n) {
    if (n <= 1)
      return false;
    else if (n <= 3)
      return true;

    if (n % 2 == 0 || n % 3 == 0) return false;

    for (int i = 5; i * i <= n; i += 6) {
      if (n % i == 0 || n % (i + 2) == 0) return false;
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