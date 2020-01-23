#include <string>
using namespace std;

class Solution {
 public:
  int maximum69Number(int num) {
    string str = to_string(num);
    bool flag = true;
    for (auto &c : str) {
      if (flag && c == '6') {
        c = '9';
        flag = false;
      }
    }
    return stoi(str);
  }
};