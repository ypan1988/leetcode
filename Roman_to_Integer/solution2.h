#include <iostream>
using namespace std;

class Solution {
  int roman_ctoi(char c) {
    switch (c) {
      case 'I':
        return 1;
      case 'V':
        return 5;
      case 'X':
        return 10;
      case 'L':
        return 50;
      case 'C':
        return 100;
      case 'D':
        return 500;
      case 'M':
        return 1000;
      default:;
    }
    return 0;
  }

 public:
  int romanToInt(string s) {
    int res = 0;
    char prev = '0';
    for (auto c : s) {
      if (prev == 'I' && (c == 'V' || c == 'X')) res -= 2 * 1;
      if (prev == 'X' && (c == 'L' || c == 'C')) res -= 2 * 10;
      if (prev == 'C' && (c == 'D' || c == 'M')) res -= 2 * 100;

      res += roman_ctoi(c);
      prev = c;
    }
    return res;
  }
};
