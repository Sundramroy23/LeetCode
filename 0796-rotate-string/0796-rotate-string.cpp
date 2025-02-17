class Solution {
    int offset(string s,char ch,int idx){
            for(int i=idx;i<s.length();i++){
                if(s[i]==ch) return i;
            }
            return -1;
        }
public:
    bool rotateString(string s, string goal) {
        int ans = false;
        if(s.length()!=goal.length()) return false;
        for(int i=0;i<s.length();i++){
            int ost = offset(goal,s[0],i);
            bool temp = true;
            if(ost==-1) continue;
            else{
                for(int i=0;i<s.length();i++){
                    if(s[i]!=goal[(i+ost)%s.length()]) {temp = false; break;}
                }
                if(temp==true) return true;
            }
        }

        
        return false;
    }
};