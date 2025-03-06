class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid[0].size();
        vector<int> arr(n*n+1,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                arr[grid[i][j]]+=1;
            }
        }
        int miss,dble;
        for(int i = 0;i<arr.size();i++){
            if(arr[i]==0) miss = i;
            else if(arr[i]==2) dble = i;
        }

        vector<int> ans = {dble,miss};
        return ans;
    }
};