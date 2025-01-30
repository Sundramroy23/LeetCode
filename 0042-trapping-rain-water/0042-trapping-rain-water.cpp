class Solution {
public:
    int trap(vector<int>& height) {
        vector<int> prefixMax,suffixMax;
        int ans=0;
        int n = height.size();
        prefixMax.push_back(height[0]);suffixMax.push_back(height[n-1]);
        
        for(int i=1;i<n;i++){
            if(prefixMax.back()>height[i]) prefixMax.push_back(prefixMax.back());
            else prefixMax.push_back(height[i]);
        }

        for(int i = n-2;i>=0;i--){
            if(suffixMax.back()>height[i]) suffixMax.push_back(suffixMax.back());
            else suffixMax.push_back(height[i]);
        }

        for(int i=0;i<n;i++){
            if(height[i]<prefixMax[i] && height[i]< suffixMax[n-i-1]);
            ans+= min(prefixMax[i] ,suffixMax[n-i-1])- height[i];
        }

        return ans;

    }
};