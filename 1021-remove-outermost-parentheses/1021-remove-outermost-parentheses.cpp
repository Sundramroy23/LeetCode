class Solution {
public:
    string removeOuterParentheses(string s) {
        int cnt = 0;
        string ans;
        for(int i=0;i<s.length();i++){
            if(s[i]==')' && cnt ==1){
                cnt = 0;
                continue;
            }
            else if(cnt != 0){
                ans.push_back(s[i]);
                
            }
            
            s[i]=='('? cnt++ : cnt--;
        }
        return ans;
    }
};