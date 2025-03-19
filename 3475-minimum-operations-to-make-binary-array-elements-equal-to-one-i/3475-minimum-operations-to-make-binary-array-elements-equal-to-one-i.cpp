class Solution {
public:
    int minOperations(vector<int>& arr) {
        int cnt = 0;
        int n = arr.size();
        for(int i = 0;i<n-2;i++){
            if(arr[i]==0){
                arr[i] = 1;
                if(i+1<n && i+2<n){
                    arr[i+1] = !arr[i+1];
                    arr[i+2] = !arr[i+2];
                cnt++;
                }
            }
        }
        if(arr[n-1]==0 || arr[n-2]==0) return -1;
        return cnt;
    }
};