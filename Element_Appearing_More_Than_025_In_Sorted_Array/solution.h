#include <unordered_map>
#include <vector>

using namespace std;

class Solution {
 public:
  int findSpecialInteger(vector<int>& arr) {
    unordered_map<int, int> m;
    for (auto elem : arr) {
      if (m.count(elem)) {
        ++m[elem];
      } else {
        m[elem] = 1;
      }
      if (m[elem] * 4 > arr.size()) return elem;
    }
    return 0;
  }
};