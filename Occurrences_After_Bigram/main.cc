#include <iostream>
#include <string>
using namespace std;

#include "solution.h"

int main() {
  string text, first, second;
  Solution sol;
  text = "alice is a good girl she is a good student";
  first = "a";
  second = "good";
  auto res1 = sol.findOcurrences(text, first, second);

  for (auto elem : res1) cout << elem << " ";
  cout << endl;

  text = "we will we will rock you";
  first = "we";
  second = "will";
  auto res2 = sol.findOcurrences(text, first, second);

  for (auto elem : res2) cout << elem << " ";
  cout << endl;

  return 0;
}