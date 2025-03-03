class Solution {
public:
    double myPow(double x, long n) {
        long long num = abs(n);
        double ans = 1;
        while(num>0){
            if(num&1){
                ans *= x;
                num--;
            }
            else{
                num/=2;
                x*=x;
            }
        }
        if(n<0) return 1/ans;
        return ans;
    }
};