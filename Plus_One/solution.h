class Solution {
 public:
  vector<int> plusOne(vector<int>& digits) {
    for (auto iter = digits.rbegin(); iter != digits.rend(); ++iter) {
      if (*iter == 9)
        *iter = 0;
      else {
        ++(*iter);
        break;
      }
    }
    if (digits[0] == 0) {
      digits[0] = 1;
      digits.push_back(0);
    }
    return digits;
  }
};