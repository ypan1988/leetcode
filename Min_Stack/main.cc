#include <iostream>
#include "solution.h"

int main()
{
  MinStack minStack;
  minStack.push(-2);
  minStack.push(0);
  minStack.push(-3);
  std::cout << minStack.getMin() << std::endl;
  minStack.pop();
  std::cout << minStack.top() << std::endl;
  std::cout << minStack.getMin() << std::endl;

  return 0;
}
