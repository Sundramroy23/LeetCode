class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mp;
        vector<int> ans;
        for(int i = 0;i<nums.size();i++){
            mp.insert({nums[i],i});
        }

        for(int i=0;i<nums.size();i++){
            if((mp.find(target-nums[i])!=mp.end() && mp[target-nums[i]]!=i)){
                ans.push_back(i);
                ans.push_back(mp[target-nums[i]]);
                return ans;
            }

        }
        return ans;
    }
};