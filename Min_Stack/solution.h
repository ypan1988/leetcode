#include <stack>

class MinStack {
  std::stack<int> s, min;

 public:
  /** initialize your data structure here. */
  MinStack() {}

  void push(int x) {
    if (min.empty() || x <= min.top()) min.push(x);
    s.push(x);
  }

  void pop() {
    if (s.top() == min.top()) min.pop();
    s.pop();
  }

  int top() { return s.top(); }

  int getMin() { return min.top(); }
};
