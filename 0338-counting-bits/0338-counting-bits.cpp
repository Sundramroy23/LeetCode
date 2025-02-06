class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans(n+1);
        ans[0]=0;
        int msb = 0;
        int counter = 0;
        for(int i=1;i<=n;i++){
            int offset = pow(2,msb);
            ans[i] = 1+ans[i-offset];
            counter++;
            if(counter == offset){
                msb++;
                counter=0;
            }
        }
        return ans;
    }
};