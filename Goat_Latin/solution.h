#include <sstream>
#include <string>
using namespace std;

class Solution {
  bool isVowel(char c) {
    return (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' ||
            c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
  }

 public:
  string toGoatLatin(string S) {
    string res, word;
    istringstream iss(S);
    int cnt = 0;
    while (iss >> word) {
      ++cnt;
      if (isVowel(word[0])) {
        res += " " + word + "ma" + string(cnt, 'a');
      } else {
        res += " " + word.substr(1) + word[0] + "ma" + string(cnt, 'a');
      }
    }
    return res.substr(1);
  }
};