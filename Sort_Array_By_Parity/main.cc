#include <iostream>
#include <vector>
using namespace std;

#include "solution.h"

int main()
{
    vector<int> ivec = {3,1,2,4};
    Solution sol;
    auto res = sol.sortArrayByParity(ivec);

    for (auto elem : ivec) {
        cout << elem << " ";
    }
    cout << endl;

    return 0;
}