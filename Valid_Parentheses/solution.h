#include <stack>
#include <string>

class Solution {
public:
  bool isValid(std::string s) {
    std::stack<char> res;
    for (auto elem : s) {
      if (elem == '(' || elem == '[' || elem == '{') res.push(elem);
      else if (!res.empty()) {
	if (elem == ')' && res.top() == '(') res.pop();
	else if (elem == ']' && res.top() == '[') res.pop();
	else if (elem == '}' && res.top() == '{') res.pop();
	else return false;
      }
      else return false;
    }
    return res.empty();
  }
};
