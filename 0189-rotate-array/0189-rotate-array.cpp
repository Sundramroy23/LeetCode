class Solution {
public:
    void swapper(vector<int> & nums,int start ,int end){
        while(start<end){
            swap(nums[start++],nums[end--]);
        }
    }
    void rotate(vector<int>& nums, int k) {
        int N = nums.size();
        k %= N;
        int m = N-k;
        if(N==1) return;
        swapper(nums,0,m-1);
        swapper(nums,m,nums.size()-1);
        swapper(nums,0,nums.size()-1);
    }
};