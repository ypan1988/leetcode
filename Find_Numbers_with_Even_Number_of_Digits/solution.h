class Solution {
 public:
  int findNumbers(vector<int>& nums) {
    int res = 0;
    for (auto elem : nums) {
      if (ndigits(elem) % 2 == 0) ++res;
    }
    return res;
  }

  int ndigits(int ival) {
    int res = 0;
    while (ival) {
      ival /= 10;
      ++res;
    }
    return res;
  }
};
