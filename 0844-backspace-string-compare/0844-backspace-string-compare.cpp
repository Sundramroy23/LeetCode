class Solution {

stack<char> stacker(string s){
    stack<char> st;
        int idx=s.length()-1;
        // if(s.length()!=t.length()) return false;
        while(idx>=0){
            if(!st.empty() && st.top()=='#'){
                if(s[idx]=='#') {st.push('#');idx--;}
                else{
                    idx--;
                    st.pop();
                }
            }
            else{

                st.push(s[idx--]);
            }
        }
        return st;
}

public:
    bool backspaceCompare(string s, string t) {
        
        stack<char> st1 = stacker(s);
        stack<char> st2 = stacker(t);
        

        while(!st1.empty() && st1.top()=='#') st1.pop();
        while(!st2.empty() && st2.top()=='#') st2.pop();

        if(st1.size()!=st2.size()) return false;
        while(!st1.empty() && !st2.empty()){



            if(st1.top()!=st2.top()) return false;
            st1.pop();st2.pop();
        }

        return true;
    }
};