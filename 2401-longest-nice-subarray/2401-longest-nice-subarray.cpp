class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        int bitMask = 0,l = 0;
        int ans = 0;
        for(int i = 0;i<nums.size();i++){
            while((bitMask & nums[i])!=0){
                bitMask ^= nums[l];
                l++;
            }
            bitMask = (bitMask | nums[i]);
            ans = max(ans,i-l+1);
        }
        return ans;
    }
};