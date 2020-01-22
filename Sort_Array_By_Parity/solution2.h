#include <algorithm>
#include <vector>
using namespace std;

class Solution {
 public:
  vector<int> sortArrayByParity(vector<int>& A) {
    partition(A.begin(), A.end(), [](auto elem) { return elem % 2 == 0; });
    return A;
  }
};