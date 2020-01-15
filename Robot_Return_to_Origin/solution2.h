#include <string>
#include <unordered_map>
using namespace std;

class Solution {
 public:
  bool judgeCircle(string moves) {
    unordered_map<char, int> umap;
    for (auto c : moves) ++umap[c];
    return (umap['U'] == umap['D']) && (umap['L'] == umap['R']);
  }
};