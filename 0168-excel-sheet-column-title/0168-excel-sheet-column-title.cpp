class Solution {
public:
    string convertToTitle(int cn) {
        if(cn==1) return "A";
        string ans = "";
        while(cn>0){
            cn--;
            char ch = 'A'+(cn%26);
            ans.push_back(ch);
            cn/=26;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};