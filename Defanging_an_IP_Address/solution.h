#include <string>
using namespace std;

class Solution {
 public:
  string defangIPaddr(string address) {
    string str;
    for (auto c : address) {
      if (c == '.')
        str += "[.]";
      else
        str += c;
    }
    return str;
  }
};