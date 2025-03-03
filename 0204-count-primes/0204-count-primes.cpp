class Solution {
public:
    int countPrimes(int n) {
        int cnt=0;
        if(n<=2) return 0;
        
        vector<int> primeMark(n,1);
        primeMark[0] = 0;primeMark[1] = 0;
        for(int i=2;i*i<n;i++){
            if(primeMark[i]==1){
                for(int j = i*i;j<n;j+=i){
                    primeMark[j]=0;
                }
            }
        }

        for(int i=2;i<primeMark.size();i++){
            if(primeMark[i]==1) cnt++;
        }
        return cnt;
    }
};