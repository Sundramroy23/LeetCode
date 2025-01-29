class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // if(nums.length==1) return 1;
        int counter = 1;
        int sortedIdx = 0;
        // int idx = 1;
        for(int idx = 1;idx<nums.size();idx++){
            if(nums[idx]!=nums[idx-1]){
                nums[++sortedIdx] = nums[idx];
                counter++;
            }
        }
        return counter;
    }
};