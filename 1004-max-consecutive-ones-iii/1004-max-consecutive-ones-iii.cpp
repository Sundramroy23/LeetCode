class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int expander = k;
        int l = 0;
        int ans = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0 && expander>0){
                expander--;
            }
            else if(nums[i]==0 && expander==0){
                while(l<i && nums[l]!=0){
                    l++;
                }
                l++;
            }
            ans = max(ans,i-l+1);
        }
        return ans;
    }
};