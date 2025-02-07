class Solution {
public:
    bool isSubsequence(string s, string t) {
        int lftPntr = 0,rhtPntr = 0;
        while(rhtPntr<t.length()){
            

            if(s[lftPntr] == t[rhtPntr]){
                lftPntr++;
            }
            rhtPntr++;
        }
        if(lftPntr>=s.length()) return true;
        return false;
    }
};