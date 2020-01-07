#include <unordered_set>
#include <vector>

using namespace std;

class Solution {
 public:
  int singleNumber(vector<int>& nums) {
    unordered_set<int> s;
    for (auto elem : nums) {
      if (s.count(elem))
        s.erase(elem);
      else
        s.insert(elem);
    }
    return *s.begin();
  }
};