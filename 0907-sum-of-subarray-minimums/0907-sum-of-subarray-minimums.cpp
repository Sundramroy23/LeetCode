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
    int sumSubarrayMins(vector<int>& arr) {
        vector<int> nsArr = nse(arr);
        vector<int> psArr = pse(arr);

        long long int total = 0; int mod = (int)(1e9+7);
        for(int i=0;i<arr.size();i++){
            long long int left = i-psArr[i];
            long long int right = nsArr[i]-i;

            total = (total%mod+(right*left*arr[i]%mod))%mod;
        }
        return total;
    }
};