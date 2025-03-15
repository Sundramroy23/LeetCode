class Solution {
public:
    int numberOfSubstrings(string s) {
        int cnt = 0;
        int left = 0;
        int hash[3] = {0};
        for(int i=0;i<s.length();i++){
            hash[s[i]-'a']++;
            while(hash[0]>0 && hash[1]>0 && hash[2]>0 && left<i){
                hash[s[left]-'a']--;
                left++;
                cnt+=(s.length()-i);
            }
        }
        return cnt;
    }
};