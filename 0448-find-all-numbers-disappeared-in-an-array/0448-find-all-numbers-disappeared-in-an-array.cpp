class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;
        int idx = 0;
        while(idx<nums.size()){
            int correct_idx = nums[idx]-1;
            if(nums[correct_idx]!=nums[idx]) swap(nums[correct_idx],nums[idx]);
            else idx++;
        }
        for(int i=0;i<nums.size();i++){
            if((i+1) != nums[i]) ans.push_back(i+1);
        }
        return ans;
    }
};