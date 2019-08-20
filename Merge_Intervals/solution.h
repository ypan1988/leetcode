#include <algorithm>
#include <vector>
using std::sort;
using std::vector;

class Solution {
 public:
  vector<vector<int>> merge(vector<vector<int>> &intervals) {
    sort(intervals.begin(), intervals.end(),
         [](const vector<int> &interval1, const vector<int> &interval2) {
           return interval1[0] < interval2[0];
         });

    vector<vector<int>> res;
    for (const auto &interval : intervals) {
      if (!res.empty() && interval[0] <= res.back().at(1)) {
        if (interval[1] > res.back().at(1)) res.back().at(1) = interval[1];
      } else {
        res.push_back(interval);
      }
    }
    return res;
  }
};
