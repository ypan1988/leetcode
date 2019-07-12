#include <iostream>
#include "solution.h"

int main()
{
  Solution s;
  std::cout << s.isValid("()") << std::endl;
  std::cout << s.isValid("()[]{}") << std::endl;
  std::cout << s.isValid("(]") << std::endl;
  std::cout << s.isValid("([)]") << std::endl;
  std::cout << s.isValid("{[]}") << std::endl;
  std::cout << s.isValid("]") << std::endl;
  std::cout << s.isValid("(])") << std::endl;

  return 0;
}
