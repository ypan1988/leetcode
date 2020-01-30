#include <string>
using namespace std;

class Solution {
 public:
  string addBinary(string a, string b) {
    auto iter_a = a.rbegin();
    auto iter_b = b.rbegin();
    string res;
    int carry = 0, sum = 0;
    while (iter_a != a.rend() || iter_b != b.rend()) {
      sum = carry;

      if (iter_a != a.rend()) {
        sum += (*iter_a++) - '0';
      }

      if (iter_b != b.rend()) {
        sum += (*iter_b++) - '0';
      }

      res = char('0' + sum % 2) + res;
      carry = sum / 2;
    }

    return carry ? '1' + res : res;
  }
};