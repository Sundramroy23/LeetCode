class Solution {
public:
    void reverseString(vector<char>& s) {
        int lft = 0 ,rht = s.size()-1;
        while(lft<rht){
            swap(s[lft++],s[rht--]);
        }
    }
};