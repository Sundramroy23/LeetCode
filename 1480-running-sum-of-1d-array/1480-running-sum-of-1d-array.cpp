class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> preFix(nums.size());
        preFix[0] = nums[0];
        for(int i=1;i<nums.size();i++){
            preFix[i] = nums[i]+preFix[i-1];
        }
        return preFix;
    }
};