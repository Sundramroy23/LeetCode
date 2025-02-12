class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length()!=t.length()) return false;
        string ans;
        vector<int> mpSt(256,-1),mpTs(256,-1);

        for(int i=0;i<s.length();i++){
           char c1 = s[i];
           char c2 = t[i];

           if(mpSt[c1]!=-1 && mpSt[c1]!=c2) return false;
           if(mpTs[c2]!=-1 && mpTs[c2]!=c1) return false;

            mpSt[c1] = c2;
            mpTs[c2] = c1;
        }
        return true;

    }
};