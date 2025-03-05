class Solution {
public:
    long long coloredCells(int n) {
        long long k = 2*n-1;
        long long l = k-2;
        return k+(l/2+1)*(l+1);
    }
};