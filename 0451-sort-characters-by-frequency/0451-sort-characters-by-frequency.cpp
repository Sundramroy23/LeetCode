class Solution {
public:
    string frequencySort(string s) {
        string ans;
        unordered_map<char,int> mp;
        for(int i = 0;i<s.length();i++){
            mp[s[i]]++;
        }

        vector<pair<char, int>> freqVec(mp.begin(), mp.end());

        sort(freqVec.begin(), freqVec.end(), [](const pair<char, int> &a, const pair<char, int> &b) {
        return a.second > b.second; // Descending order
    });

        for(auto it:freqVec){
            for(int i =1;i<=it.second;i++){

            ans.push_back(it.first);
            }
        }
        return ans;
    }
};