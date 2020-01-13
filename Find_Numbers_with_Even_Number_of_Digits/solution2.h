class Solution {
 public:
  int findNumbers(vector<int>& nums) {
    int res = 0;
    for (auto elem : nums) {
      if ((elem > 9 && elem < 100) || (elem > 999 && elem < 10000) ||
          (elem == 100000))
        ++res;
    }
    return res;
  }
};
