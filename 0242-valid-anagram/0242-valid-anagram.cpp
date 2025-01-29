class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> v(26,0);
        if(s.length()!=t.length()) return false;

        for(char ch:s){
            v[ch-'a']++;
        }
        for(int i=0;i<t.length();i++){
            if(v[t[i]-'a']<=0) return false;
            v[t[i]-'a']--;
        }
        return true;
    }
};