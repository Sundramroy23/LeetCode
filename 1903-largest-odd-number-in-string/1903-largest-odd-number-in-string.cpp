class Solution {
public:
    string largestOddNumber(string num) {
        int totLength = num.length();
        int totChars = -1;
        string ans;
        for(int i = num.length()-1;i>=0;i--){
            if(int(num[i]-'0')%2==1){
                totChars = i+1;
                break;
            }
        }
        ans = num.substr(0,totChars);
        return totChars==-1?"":ans;
    }
};