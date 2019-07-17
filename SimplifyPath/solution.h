#include <sstream>
#include <stack>
#include <string>

class Solution {
public:
    std::string simplifyPath(std::string path) {
      std::stringstream ss(path);
      std::string str;
      std::stack<std::string> sta;

      while(getline(ss, str, '/')) {
        if (str == "" || str == ".") {
          continue;
        } else if (str == "..") {
          if (!sta.empty()) sta.pop();
        } else {
          sta.push(str);
        }
      }

      std::string res;
      if (sta.empty()) res = "/";
      while (!sta.empty()) {
        res = "/" + sta.top() + res;
        sta.pop();
      }
      return res;
    }
};
