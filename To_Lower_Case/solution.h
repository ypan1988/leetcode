#include <cctype>
#include <string>
using namespace std;

class Solution {
 public:
  string toLowerCase(string str) {
    string res;
    for (auto elem : str) res += tolower(elem);
    return res;
  }
};
