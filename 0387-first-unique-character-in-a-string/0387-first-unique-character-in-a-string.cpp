class Solution {
public:
    int currMaxVal=INT_MAX,CurrMaxIdx = INT_MAX;
    int firstUniqChar(string s) {
        map<char,pair<int,int>> mp;
        for(int i =0;i<s.length();i++){
            if(mp[s[i]].second == 0) {
                mp[s[i]] = {i,1};
            }
            else mp[s[i]].second++;
        }
        for(auto it:mp){
            if (it.second.second ==1 && it.second.first < CurrMaxIdx) CurrMaxIdx = it.second.first;
        }
        if (CurrMaxIdx == INT_MAX )return -1;
        return CurrMaxIdx;
    }
};