#include <iostream>
#include <vector>

#include "solution.h"

using namespace std;

int main()
{
  Solution s;

  vector<int> ivec1 = {1, 3};
  vector<int> ivec2 = {2};

  vector<int> ivec3 = {1, 2};
  vector<int> ivec4 = {3, 4};

  cout << s.findMedianSortedArrays(ivec1, ivec2) << endl;
  cout << s.findMedianSortedArrays(ivec3, ivec4) << endl;

  return 0;
}
