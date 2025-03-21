class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> pas = {{1},{1,1}};
        if(rowIndex==0 || rowIndex==1) return pas[rowIndex];
        for(int i=1;i<rowIndex;i++){
            vector<int> tempArr = {1};
            for(int j = 0;j<pas[i].size()-1;j++){
                tempArr.push_back(pas[i][j]+pas[i][j+1]);
            }
            tempArr.push_back(1);
            pas.push_back(tempArr);
        }
        return pas[rowIndex];
    }
};