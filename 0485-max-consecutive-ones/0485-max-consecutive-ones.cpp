class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans=0;
        int currMaxOnes=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                currMaxOnes++;
            }
            else{
                ans=max(ans,currMaxOnes);
                currMaxOnes=0;
            }
        }
        if(ans>currMaxOnes){
        return ans;

        }
        return currMaxOnes;
    }
};