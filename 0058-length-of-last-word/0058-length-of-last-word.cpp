class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.length()-1;
        bool charEncountered = false;
        int charIdx = -1;
        for(int i = n;i>=0;i--){
            if(charEncountered == false &&((s[i]>='a' && s[i]<='z') ||( s[i]>='A' && s[i]<='Z'))){
                charEncountered = true;
                charIdx = i;
            }
            if(s[i] == ' ' && charEncountered == true){
                return (charIdx - i);
            }
        }
        return charIdx+1;
    }
};