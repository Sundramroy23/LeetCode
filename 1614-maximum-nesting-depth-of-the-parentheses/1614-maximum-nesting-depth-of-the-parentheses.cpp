class Solution {

    int max(int a,int b){
        return a>=b?a:b;
    }
public:
    int maxDepth(string s) {
        int maxH = 0;
        int cnt = 0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                cnt++;
            }
            else if(s[i]==')') cnt--;
            maxH = max(maxH,cnt);
        }
        return maxH;
    }
};