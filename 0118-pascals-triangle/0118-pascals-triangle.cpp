class Solution {

    int fact(int row,int col){
        int res = 1;
        for(int i=0;i<col;i++){
            res = res*(row-i);
            res = res/(i+1); 
        }
        return res;
    }
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans(numRows);
        for(int i=0;i<numRows;i++){
            for(int j = 0;j<=i;j++){
                ans[i].push_back(fact(i,j));
            }
        }
        return ans;
    }
};