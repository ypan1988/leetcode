#include <iostream>
#include <string>
using namespace std;

#include "solution3.h"

int main() {
  string s, t;
  Solution sol;

  s = "anagram";
  t = "nagaram";
  cout << sol.isAnagram(s, t) << endl;

  s = "rat";
  t = "car";
  cout << sol.isAnagram(s, t) << endl;

  return 0;
}