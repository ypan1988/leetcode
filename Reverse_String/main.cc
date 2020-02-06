#include <iostream>
using namespace std;

#include "solution.h"

int main() {
  vector<char> cvec1 = {'h', 'e', 'l', 'l', 'o'};
  vector<char> cvec2 = {'H', 'a', 'n', 'n', 'a', 'h'};

  Solution sol;

  sol.reverseString(cvec1);
  sol.reverseString(cvec2);

  for (auto c : cvec1) {
    cout << c << " ";
  }
  cout << endl;

  for (auto c : cvec2) {
    cout << c << " ";
  }
  cout << endl;

  return 0;
}