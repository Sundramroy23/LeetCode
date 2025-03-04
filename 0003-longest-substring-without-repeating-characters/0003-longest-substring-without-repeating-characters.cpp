class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans = 0,lp = 0;
        // if s.length()==0
        set<char> st;
        for(int i=0;i<s.length();i++){
            if(st.find(s[i])!=st.end()){
                while (lp < i && st.find(s[i]) != st.end()) {
            st.erase(s[lp]);
            lp++;
                }
            }
        st.insert(s[i]);
        ans = max(ans,i-lp+1);    
        }  
        
    
    return ans;}
};