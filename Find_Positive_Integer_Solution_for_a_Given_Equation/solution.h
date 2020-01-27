#include <vector>
using namespace std;

class CustomFunction {
 public:
  int f(int x, int y) { return x + y; }
};

class Solution {
 public:
  vector<vector<int>> findSolution(CustomFunction& customfunction, int z) {
    int lo = 1;
    int hi = 1000;
    vector<vector<int>> res;
    while (lo <= 1000 && hi >= 1) {
      int val = customfunction.f(lo, hi);
      if (val < z)
        lo++;
      else if (val > z)
        hi--;
      else {
        res.push_back({lo, hi});
        lo++;
        hi--;
      }
    }
    return res;
  }
};