#include <iostream>
using namespace std;

class Solution {
 public:
  int romanToInt(string s) {
    int res = 0;
    char prev = '0';
    for (auto c : s) {
      int val = 0, val2 = 0;
      switch (c) {
        case 'I': {
          val = 1;
          prev = 'I';
          break;
        }
        case 'V': {
          val = 5;
          if (prev == 'I') val2 = -1 * 2;
          prev = 'V';
          break;
        }
        case 'X': {
          val = 10;
          if (prev == 'I') val2 = -1 * 2;
          prev = 'X';
          break;
        }
        case 'L': {
          val = 50;
          if (prev == 'X') val2 = -10 * 2;
          prev = 'L';
          break;
        }
        case 'C': {
          val = 100;
          if (prev == 'X') val2 = -10 * 2;
          prev = 'C';
          break;
        }
        case 'D': {
          val = 500;
          if (prev == 'C') val2 = -100 * 2;
          prev = 'D';
          break;
        }
        case 'M': {
          val = 1000;
          if (prev == 'C') val2 = -100 * 2;
          prev = 'M';
          break;
        }
        default:;
      }
      res += (val + val2);
    }
    return res;
  }
};
