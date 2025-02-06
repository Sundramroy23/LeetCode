class Solution {

    // int fact(int row,int col){
    //     int res = 1;
    //     for(int i=0;i<col;i++){
    //         res = res*(row-i);
    //         res = res/(i+1); 
    //     }
    //     return res;
    // }
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans(numRows);
        ans[0].push_back(1);
        for(int i=1;i<numRows;i++){
            int fact =1;
            for(int j = 0;j<=i;j++){
                if(j==0 || j==i) {ans[i].push_back(1);continue;}
                fact = fact*(i-j+1);
                fact = fact/j;
                ans[i].push_back(fact);
            }
            // ans[i].push_back(1);
        }
        return ans;
    }
};