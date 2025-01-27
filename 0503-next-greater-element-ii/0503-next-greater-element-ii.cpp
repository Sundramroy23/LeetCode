class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int N = nums.size();
        vector<int> ans(N,0);
        stack<int> st;
        for(int i=2*N-1;i>=0;i--){
            while(!st.empty() && st.top()<=nums[i%N]){
                st.pop();
            }
            if(i<N){
                if(st.empty()) ans[i] = -1;
                else{
                    ans[i] = st.top();
                    // st.pop();
                }
            }
            st.push(nums[i%N]);
        }
        return ans;
    }
};