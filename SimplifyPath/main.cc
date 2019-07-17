#include <iostream>
#include "solution.h"

int main()
{
  Solution s;
  std::cout << s.simplifyPath("/home/") << std::endl;
  std::cout << s.simplifyPath("/../") << std::endl;
  std::cout << s.simplifyPath("/home//foo/") << std::endl;
  std::cout << s.simplifyPath("/a/./b/../../c/") << std::endl;
  std::cout << s.simplifyPath("/a/../../b/../c//.//") << std::endl;
  std::cout << s.simplifyPath("/a//b////c/d//././/..") << std::endl;

  return 0;
}
