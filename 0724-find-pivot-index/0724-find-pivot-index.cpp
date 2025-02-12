class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int> prefixSum(nums.size());
        prefixSum[0] = nums[0];
        for(int i=1;i<nums.size();i++){
            prefixSum[i] = prefixSum[i-1]+nums[i];
        }
        int tots = prefixSum[nums.size()-1];
        if(nums.size()==1) return 0;
        if(prefixSum[nums.size()-1]-nums[0]==0) return 0;
        // else if(nums.size()>1 && prefixSum[nums.size()-2]==0) return nums.size()-1;
        for(int i =1;i<nums.size();i++){
            
            if(prefixSum[i-1] == tots - prefixSum[i]) return i;
            // if(i = nums.size()-1 && prefixSum[i-1] == 0)
        }
        return -1;
    }
};