
int binarySearch(vector<int> arr,int start,int end,int target){
    int mid = (start+end)/2;
    if(start>end){
        return -1;
    }
    else if(arr[mid]==target){
        return mid;
    }
    else if(target > arr[mid]){
        return binarySearch(arr , mid+1,end ,target);
    }
    else{
        return binarySearch(arr , start, mid-1 ,target);
    }
    // return -1;
}

class Solution {
public:
    int search(vector<int>& nums, int target) {
        return binarySearch(nums , 0 ,nums.size()-1, target);
    }
};