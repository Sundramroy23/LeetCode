class Solution {

    int max(int a,int b){
        return a>=b?a:b;
    }
public:
    int maxDepth(string s) {
        int maxH = 0;
        stack<char> st;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                st.push('(');
            }
            else if(s[i]==')') st.pop();
            maxH = max(maxH,st.size());
        }
        return maxH;
    }
};