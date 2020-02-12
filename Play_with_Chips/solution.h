#include <vector>
using namespace std;

class Solution {
 public:
  int minCostToMoveChips(vector<int>& chips) {
    int res[2] = {0, 0};
    for (auto elem : chips) {
      ++res[elem % 2];
    }
    return min(res[0], res[1]);
  }
};