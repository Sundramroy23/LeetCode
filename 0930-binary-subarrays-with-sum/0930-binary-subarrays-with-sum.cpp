class Solution {

    int solver(vector<int> &nums,int goal){
        if(goal<0) return 0;
        int cnt = 0,l = 0, subSum = 0;
        for(int i=0;i<nums.size();i++){
            subSum+=nums[i];
            while(subSum>goal){
                subSum-=nums[l++];
            }
            cnt+= (i-l+1);

        }
        return cnt;
    }
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return solver(nums,goal) - solver(nums,goal -1);
    }
};