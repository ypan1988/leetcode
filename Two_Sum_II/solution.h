#include <algorithm>
#include <vector>

using namespace std;

class Solution {
 public:
  vector<int> twoSum(vector<int>& numbers, int target) {
    for (int i = 0; i < numbers.size(); ++i) {
      int tmp = target - numbers[i];
      int j = upper_bound(numbers.begin(), numbers.end(), tmp) - numbers.begin() - 1;
      if (i < j && numbers[j] == tmp)
	return {i+1, j+1};
    }
    return {};
  }
};
