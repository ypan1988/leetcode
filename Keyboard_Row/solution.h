#include <string>
#include <unordered_set>
#include <vector>
using namespace std;

class Solution {
 public:
  vector<string> findWords(vector<string>& words) {
    unordered_set<char> s1 = {'Q', 'W', 'E', 'R', 'T', 'Y', 'U', 'I', 'O', 'P'};
    unordered_set<char> s2 = {'A', 'S', 'D', 'F', 'G', 'H', 'J', 'K', 'L'};
    unordered_set<char> s3 = {'Z', 'X', 'C', 'V', 'B', 'N', 'M'};

    vector<string> res;
    for (auto str : words) {
      int row = 0;
      bool flag = true;
      for (auto c : str) {
        c = toupper(c);
        if (row == 0) {
          if (s1.count(c)) row = 1;
          if (s2.count(c)) row = 2;
          if (s3.count(c)) row = 3;
        }
        if ((row == 1 && !s1.count(c)) || (row == 2 && !s2.count(c)) ||
            (row == 3 && !s3.count(c))) {
          flag = false;
          break;
        }
      }
      if (flag) res.push_back(str);
    }
    return res;
  }
};