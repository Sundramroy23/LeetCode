class Solution {
public:
    long long int singleNumber(vector<int>& nums) {
        long long int ans = 0;
        for(int numShifter=0;numShifter<=31;numShifter++){
            int cnt = 0;
            for(int i=0;i<nums.size();i++){
                if(nums[i]&(1<<numShifter)) cnt++;
            }
            if(cnt%3!=0){
                ans = ans|(1<<numShifter);
            }
        }
        return ans;
    }
};