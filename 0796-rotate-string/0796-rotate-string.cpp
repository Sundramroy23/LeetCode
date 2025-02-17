class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length()!=goal.length()) return false;
        int n = s.length();
        bool ans = false;
        int idx = 0;
        for(int i=0;i<2*n;i++){
            if(goal[i%n] == s[idx]){
                idx++;
                if(idx==n) ans = true;
            }
            else {
                i = i-idx;
                idx = 0;
                }
        }
        return ans;
    }
};