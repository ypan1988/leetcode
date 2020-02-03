#include <iostream>
#include <string>
using namespace std;

#include "solution.h"

int main() {
  Solution sol;
  cout << sol.toGoatLatin(string("I speak Goat Latin")) << endl;
  cout << sol.toGoatLatin(
              string("The quick brown fox jumped over the lazy dog"))
       << endl;

  return 0;
}