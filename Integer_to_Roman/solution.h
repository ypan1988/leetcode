#include <string>
using namespace std;

class Solution {
 public:
  string intToRoman(int num) {
    string str = to_string(num);
    int sz = str.size();

    string res;
    for (auto c : str) {
      int digit = c - '0';
      if (sz == 4) {
        res += string(digit, 'M');
      } else if (sz == 3) {
        if (digit == 9)
          res += "CM";
        else if (digit >= 5)
          res += "D" + string(digit - 5, 'C');
        else if (digit == 4)
          res += "CD";
        else
          res += string(digit, 'C');
      } else if (sz == 2) {
        if (digit == 9)
          res += "XC";
        else if (digit >= 5)
          res += "L" + string(digit - 5, 'X');
        else if (digit == 4)
          res += "XL";
        else
          res += string(digit, 'X');
      } else {
        if (digit == 9)
          res += "IX";
        else if (digit >= 5)
          res += "V" + string(digit - 5, 'I');
        else if (digit == 4)
          res += "IV";
        else
          res += string(digit, 'I');
      }

      --sz;
    }
    return res;
  }
};