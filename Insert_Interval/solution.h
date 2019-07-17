#include <algorithm>
#include <vector>

using std::vector;
using std::max;
using std::min;

class Solution {
public:
  vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
    vector<vector<int>> res;
    if (intervals.empty()) {
      res.push_back(newInterval);
      return res;
    }

    bool flag_add = false;
    for (const auto &interval : intervals) {
      if (flag_add) {
        if (interval[0] > res.back().at(1)) {
          res.push_back(interval);
        } else if (interval[0] == res.back().at(1)) {
          res.back().at(1) = interval[1];
        } else if (interval[0] < res.back().at(1) && interval[1] > res.back().at(1)) {
          res.back().at(1) = interval[1];
        }
      } else {
        if (newInterval[0] > interval[1]) {
          res.push_back(interval);
        } else if (newInterval[0] == interval[1]) {
          res.push_back(interval);
          res.back().at(1) = newInterval[1];
          flag_add = true;
        } else {
          if (newInterval[1] < interval[0]) {
            res.push_back(newInterval);
            res.push_back(interval);
            flag_add = true;
          } else {
            res.push_back(
                {min(interval[0], newInterval[0]), max(interval[1], newInterval[1])});
            flag_add = true;
          }
        }
      }
    }

    if (!flag_add) res.push_back(newInterval);

    return res;
  }
};
