class Solution {

    string leadAndTrailSpaces(string str){
        size_t start = str.find_first_not_of(' ');
        size_t end = str.find_last_not_of(' ');
    
        if (start == std::string::npos)
            return "";
    
        return str.substr(start, end - start + 1);
    }

public:
    string reverseWords(string s) {
        string result = leadAndTrailSpaces(s);
        // string result = regex_replace(s, regex("^ +| +$|( ) +"), "$1");
        int n = result.length();
        stack<char> st;
        string ans;
        for(int i=n-1;i>=0;i--){
            if(result[i]==' ' && result[i-1]==' ') continue;
            else if(i==-1 || result[i]==' '){
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
        while(!st.empty()){
                    ans.push_back(st.top());
                    st.pop();
                }
        return ans;
    }
};