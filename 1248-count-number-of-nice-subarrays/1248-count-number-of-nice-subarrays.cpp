class Solution {
    int totSub(vector<int>&nums ,int k){
        int l=0,r=0,sum=0,cnt=0;
        while(r<nums.size()){
            sum+=nums[r]%2;
            while(sum>k){
                sum-= nums[l]%2;
                l++;
            }
            cnt+=(r-l+1);
            r++;
        }
        return cnt;
    }

public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        return (totSub(nums,k)-totSub(nums,k-1));
    }
};