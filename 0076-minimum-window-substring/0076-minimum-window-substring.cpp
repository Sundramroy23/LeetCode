class Solution {
public:
    string minWindow(string s, string t) {
        int hash[256] = {0};
        int cnt = 0,l=0,r=0,minLen = INT_MAX,startIdx = -1;
        int m = t.length();
        int n = s.length();
        for(int i=0;i<t.length();i++){
            hash[t[i]]++;
        }
        while(r<s.length()){
            if(hash[s[r]]>0) cnt++;
            hash[s[r]]--;
            while(cnt==m){
                if((r-l+1)<minLen){
                    minLen = r-l+1;
                    startIdx = l;
                }
                hash[s[l]]++;
                if(hash[s[l]]>0) cnt--;

                l++;
            }
            r++;
        }
        return startIdx == -1?"":s.substr(startIdx,minLen);
    }
};