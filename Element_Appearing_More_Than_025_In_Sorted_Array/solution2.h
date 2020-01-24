#include <vector>
using namespace std;

class Solution {
 public:
  int findSpecialInteger(vector<int>& arr) {
    int sz = arr.size();
    vector<int> elems = {arr[sz / 4], arr[sz / 2], arr[sz * 3 / 4]};
    for (auto elem : elems) {
      auto first = lower_bound(arr.begin(), arr.end(), elem);
      auto last = upper_bound(arr.begin(), arr.end(), elem);
      if (distance(first, last) * 4 > sz) return elem;
    }
    return -1;
  }
};