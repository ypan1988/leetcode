#include <string>
#include <unordered_set>
using namespace std;

class Solution {
 public:
  int numJewelsInStones(string J, string S) {
    unordered_set<char> jewels(J.begin(), J.end());

    int res = 0;
    for (auto elem : S) {
      if (jewels.count(elem)) ++res;
    }
    return res;
  }
};