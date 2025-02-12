class Solution {

    bool helper(string s,int lft,int rht){
        while(lft<rht){
            if(s[lft]!=s[rht]) return false;
            lft++;rht--; 
        }
        return true;
    }
public:
    bool validPalindrome(string s) {
        int lft = 0,rht = s.length()-1;
        bool check = true;
        while(lft<rht){
            if(s[lft]==s[rht]){
                lft++;rht--;
            }
            else {
                return helper(s,lft+1,rht) || helper(s,lft,rht-1);
            }
            
        }
        return true;
    }
};