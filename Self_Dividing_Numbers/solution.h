#include <vector>
using namespace std;

class Solution {
 public:
  bool valid_num(int val) {
    int ival = val;
    while (ival) {
      int tmp = ival % 10;
      if (tmp == 0 || val % tmp != 0) return false;
      ival /= 10;
    }
    return true;
  }
  vector<int> selfDividingNumbers(int left, int right) {
    vector<int> res;
    for (int idx = left; idx <= right; ++idx) {
      if (valid_num(idx)) res.push_back(idx);
    }
    return res;
  }
};