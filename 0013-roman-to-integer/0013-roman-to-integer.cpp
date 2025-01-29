class Solution {
public:
    int romanToInt(string s) {
        map<char,int> mp = {{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
        // return 1;
        int n = s.length();
        int ans = 0;
        for(int idx = 0;idx<s.length();idx++){
            if(s[idx]=='I' && idx !=n-1){
                if(s[idx+1]=='V') {ans+=4;idx++;}
                else if(s[idx+1]=='X') {ans+=9;idx++;}
                else ans+=1;
                
            }
            else if(s[idx] == 'X' && idx!=n-1){
                if(s[idx+1]=='L') {ans+=40;idx++;}
                else if(s[idx+1]=='C') {ans+=90;idx++;}
                else ans+=10;
            }
            else if(s[idx] == 'C' && idx!=n-1){
                if(s[idx+1]=='D') {ans+=400;idx++;}
                else if(s[idx+1]=='M') {ans+=900;idx++;}
                else ans+=100;
            }
            else{
                ans+=mp[s[idx]];
            }
        }
        return ans;
    }
};