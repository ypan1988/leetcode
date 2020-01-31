#include <string>
#include <unordered_map>
using namespace std;

class Solution {
 public:
  bool isAnagram(string s, string t) {
    unordered_map<char, int> m;
    for (auto c : s) {
      if (!m.count(c))
        m[c] = 1;
      else
        ++m[c];
    }
    for (auto c : t) {
      if (!m.count(c))
        return false;
      else
        --m[c];
    }
    for (auto elem : m) {
      if (elem.second != 0) return false;
    }

    return true;
  }
};