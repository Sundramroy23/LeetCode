class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        long lptr = 0;
        vector<string> ans;
        for(long i = 0;i<nums.size();i++){
            if(i == nums.size() - 1 || (long)nums[i+1] - (long)nums[i] != 1){
                if(lptr == i) {
                    ans.push_back(to_string(nums[i]));
                } else {
                    ans.push_back(to_string(nums[lptr]) + "->" + to_string(nums[i]));
                }
                lptr = i + 1;
            }
        }
        return ans;
    }
};