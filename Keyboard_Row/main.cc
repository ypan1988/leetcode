#include <iostream>
#include <string>
#include <vector>
using namespace std;

#include "solution.h"

int main() {
  vector<string> svec = {"Hello", "Alaska", "Dad", "Peace"};
  Solution sol;
  auto res = sol.findWords(svec);
  for (auto str : res) {
    cout << str << " ";
  }
  cout << endl;

  return 0;
}