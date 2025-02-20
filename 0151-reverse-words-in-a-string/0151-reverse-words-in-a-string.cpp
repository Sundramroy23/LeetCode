class Solution {
public:
    string reverseWords(string s) {
        string result = regex_replace(s, regex("^ +| +$|( ) +"), "$1");
        int n = result.length();
        stack<char> st;
        string ans;
        for(int i=n-1;i>=-1;i--){
            if(i==-1 || result[i]==' '){
                while(!st.empty()){
                    ans.push_back(st.top());
                    st.pop();
                }
                if(i!=-1){
                    ans.push_back(' ');
                }

            }
            else{
                st.push(result[i]);
            }
        }
        return ans;
    }
};