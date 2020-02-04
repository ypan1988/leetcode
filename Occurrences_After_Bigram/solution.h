#include <sstream>
#include <string>
#include <vector>
using namespace std;

class Solution {
 public:
  vector<string> findOcurrences(string text, string first, string second) {
    istringstream iss(text);
    string word, prev0, prev1;
    vector<string> svec;
    while (iss >> word) {
      if (prev0 == first && prev1 == second) {
        svec.push_back(word);
      }
      prev0 = prev1;
      prev1 = word;
    }
    return svec;
  }
};