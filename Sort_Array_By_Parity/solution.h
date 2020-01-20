#include <vector>
using namespace std;

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        int i = 0;
        int j = A.size() - 1;
        while(true) {
            while (i <= A.size() - 1 && A[i] % 2 == 0) {
                ++i;
            }
            while (j >= 0 && A[j] % 2 != 0) {
                --j;
            }
            if (i >= j) break;
            else swap(A[i], A[j]);
        }
        return A;
    }
};