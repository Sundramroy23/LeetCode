class Solution {
public:
    int strStr(string haystack, string needle) {
        int idx = 0;
        for(int i=0;i<haystack.length();i++){
            int newIdx = i;
            while(haystack[newIdx++] == needle[idx]){
                idx++;
                if(idx == needle.length()) return (i);
            }
            idx = 0;
            
        }
        return -1;
    }
};