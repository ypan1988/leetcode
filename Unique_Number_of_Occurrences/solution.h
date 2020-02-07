#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace std;

class Solution {
 public:
  bool uniqueOccurrences(vector<int>& arr) {
    unordered_map<int, int> m;
    for (auto elem : arr) {
      if (m.count(elem))
        ++m[elem];
      else
        m[elem] = 1;
    }

    unordered_set<int> s;
    for (auto elem : m) {
      if (s.count(elem.second))
        return false;
      else
        s.insert(elem.second);
    }

    return true;
  }
};