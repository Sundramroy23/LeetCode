class Solution {

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

public:
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
};