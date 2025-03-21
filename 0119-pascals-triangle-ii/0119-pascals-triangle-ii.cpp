class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> ans = {1};
        for(int i=1;i<rowIndex+1;i++){
            long long temp = (long long)ans[i-1]*(rowIndex-i+1)/i;
            ans.push_back((int) temp);
        }
        return ans;
    }
};