#include <string>
#include <vector>
using namespace std;

class Solution {
 public:
  bool isAnagram(string s, string t) {
    if (s.size() != t.size()) return false;

    vector<int> ivec(26, 0);
    for (int i = 0; i < s.size(); ++i) {
      ++ivec[s[i] - 'a'];
      --ivec[t[i] - 'a'];
    }

    for (auto elem : ivec) {
      if (elem != 0) return false;
    }

    return true;
  }
};