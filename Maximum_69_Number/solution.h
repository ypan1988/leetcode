#include <vector>
using namespace std;

class Solution {
 public:
  int maximum69Number(int num) {
    vector<int> ivec;
    while (num) {
      ivec.push_back(num % 10);
      num /= 10;
    }

    int res = 0;
    int flag = true;
    for (auto iter = ivec.rbegin(); iter != ivec.rend(); ++iter) {
      if (flag && *iter == 6) {
        *iter = 9;
        flag = false;
      }
      res = (res + *iter) * 10;
    }

    return res / 10;
  }
};