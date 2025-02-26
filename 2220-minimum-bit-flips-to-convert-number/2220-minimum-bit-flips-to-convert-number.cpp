class Solution {
public:
    int minBitFlips(int start, int goal) {
        int flip = start^goal;
        int cnt = 0;
        for(int i=0;i<31;i++){
            if(flip&(1<<i)) cnt++;
        }
        return cnt;
    }
};