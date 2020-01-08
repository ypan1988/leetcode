#include <algorithm>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
 public:
  vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
    unordered_map<int, int> ht;
    for (int i = 0; i < arr2.size(); ++i) {
      ht.insert({arr2[i], i});
    }

    vector<int> arr1_p1, arr1_p2;
    for (auto elem : arr1) {
      if (ht.count(elem))
        arr1_p1.push_back(elem);
      else
        arr1_p2.push_back(elem);
    }

    sort(arr1_p1.begin(), arr1_p1.end(),
         [&](int a, int b) { return ht[a] < ht[b]; });

    sort(arr1_p2.begin(), arr1_p2.end());

    arr1_p1.insert(arr1_p1.end(), arr1_p2.begin(), arr1_p2.end());

    return arr1_p1;
  }
};