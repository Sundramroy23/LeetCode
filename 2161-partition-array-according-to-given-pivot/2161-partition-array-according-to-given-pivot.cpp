class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> ans,less,great;
        int same = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<pivot) less.push_back(nums[i]);
            else if(nums[i]>pivot) great.push_back(nums[i]);
            else{
                same++;
            }
        }

        for(int i:less){
            ans.push_back(i);
        }
        while(same--){
            ans.push_back(pivot);
        }
        for(int i:great){
            ans.push_back(i);
        }

        return ans;
    }
};