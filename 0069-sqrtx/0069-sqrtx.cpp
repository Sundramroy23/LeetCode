class Solution {

long long int helper(long long int left,long long int right,long long int x){
    long long int mid = (right-left)/2+left;
    if(left>right) return left-1;
    if(mid*mid==x) return mid;
    else if(mid*mid>x) return helper(left,mid-1,x);
    else return helper(mid+1,right,x);
}

public:
    long long int mySqrt(long long int x) {
        return helper(0,x,x);
    }
};