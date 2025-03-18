class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int N = nums.size();
        int cnt = 0,idx = 2;
        if(N<=2) return N ;
        for(int i =2;i<N;i++){
            if(nums[idx-2]!=nums[i]){
                swap(nums[idx],nums[i]);
                idx++;
                
            }

            
        }
        return idx;
    }
};