class Solution {
public:
    bool isValid(string s) {
        if(s.length()==0) return true;
        map<char,int> mp = {
        {'(',-1},
        {')',1}, 
        {'{',-2}, 
        {'}',2}, 
        {'[',-3}, 
        {']',3}
        };
        stack<char> st;
        st.push(s[0]);
        for(int i=1;i<s.length();i++){
            if(mp[s[i]]<0) st.push(s[i]);
            else{
                if(!st.empty() && mp[st.top()]+mp[s[i]] == 0) st.pop();
                else return false;
            }
        }
        if(!st.empty()) return false;
        return true;
        // return false;

    }
};