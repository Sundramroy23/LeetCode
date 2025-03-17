class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int idx = nums1.size()-1;
        int firIdx = m-1,secIdx = n-1;

        while(idx>=0 && secIdx>=0 && firIdx>=0){
            if(nums1[firIdx]>nums2[secIdx]){
                nums1[idx] = nums1[firIdx--];
            }
            else {
                nums1[idx] = nums2[secIdx--];
            }
            idx--;
        }
        while (secIdx >= 0) {
            nums1[idx--] = nums2[secIdx--];
        }
    }
    
};