#include <string>
#include <vector>
using namespace std;

class Solution {
 public:
  vector<int> diStringMatch(string S) {
    vector<int> ivec(S.size() + 1, 0);
    int lo = 0, idx = 0;
    int hi = S.size();
    for (auto c : S) {
      switch (c) {
        case 'I': {
          ivec[idx++] = lo++;
          break;
        }
        case 'D': {
          ivec[idx++] = hi--;
          break;
        }
        default:;
      }
    }
    ivec[S.size()] = hi;
    return ivec;
  }
};