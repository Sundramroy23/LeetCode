class Solution {
    vector<vector<int>> prefixSum(vector<vector<char>> matrix){
        int rows = matrix.size();
        int cols = matrix[0].size();
        vector<vector<int>> pfSum(rows, vector<int>(cols, 0));
        // Initialize the first row
        for (int j = 0; j < cols; j++) {
            pfSum[0][j] = (matrix[0][j] == '1') ? 1 : 0;
        }

        // Compute prefix sum for each column
        for (int i = 1; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (matrix[i][j] == '0') {
                    pfSum[i][j] = 0; // Reset height if '0'
                } else {
                    pfSum[i][j] = pfSum[i - 1][j] + 1; // Add height if '1'
                }
            }
        }

        return pfSum;
    }

        vector<int> nse(vector<int> heights){
        stack<int> st;
        vector<int> nsArr(heights.size());
        for(int i=heights.size()-1;i>=0;i--){
            while(!st.empty() && heights[st.top()]>=heights[i]){
                st.pop();
            }
            nsArr[i] = st.empty()?heights.size():st.top();
            st.push(i);
        }
        return nsArr;
    }

    vector<int> pse(vector<int> heights){
        stack<int> st;
        vector<int> psArr(heights.size());
        for(int i=0;i<heights.size();i++){
            while(!st.empty() && heights[st.top()]>heights[i]) {st.pop();}

            psArr[i] = st.empty() ? -1:st.top();
            st.push(i);
        }
        return psArr;
    }
    int largestRectangleArea(vector<int>& heights) {
        vector<int> nsArr,psArr;
        nsArr = nse(heights);
        psArr = pse(heights);

        int maxi = 0;
        for(int i=0;i<heights.size();i++){
            maxi = max(maxi , heights[i]*(nsArr[i]-psArr[i]-1));
        }
        return maxi;
    }

public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        
        vector<vector<int>>subArr = prefixSum(matrix);
        int maxi = 0;

        for(int i=0;i<matrix.size();i++){
            maxi = max(maxi,largestRectangleArea(subArr[i]));
        }

        return maxi;
        
    }
};