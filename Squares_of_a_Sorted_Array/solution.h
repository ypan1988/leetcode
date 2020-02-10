#include <cmath>
#include <vector>
using namespace std;

class Solution {
 public:
  vector<int> sortedSquares(vector<int>& A) {
    vector<int> res(A.size(), 0);
    int lo = 0;
    int hi = A.size() - 1;
    auto iter = res.rbegin();
    while (iter != res.rend()) {
      if (abs(A[lo]) <= abs(A[hi]))
        *iter++ = pow(A[hi--], 2);
      else
        *iter++ = pow(A[lo++], 2);
    }
    return res;
  }
};