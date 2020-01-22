#include <unordered_set>
#include <vector>
using namespace std;

class Solution {
 public:
  int repeatedNTimes(vector<int>& A) {
    unordered_set<int> s;
    for (auto elem : A) {
      if (s.count(elem))
        return elem;
      else
        s.insert(elem);
    }
    return 0;
  }
};