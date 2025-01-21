class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int elem = nums[0];
        int cnt = 1;
        for(int i=1;i<nums.size();i++){
            if(cnt == 0) {elem = nums[i];cnt++;}
            else{
                if(nums[i]==elem) cnt++;
                else cnt--;
            }
        }
        return elem;
    }
};