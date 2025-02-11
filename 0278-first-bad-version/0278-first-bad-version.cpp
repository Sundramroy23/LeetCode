// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
    int helper(int lft,int rht){
        if(lft>rht) return 0;
        int mid = (lft+rht)/2;
        if(isBadVersion(mid) && !isBadVersion(mid-1) && isBadVersion(mid+1)) return mid;
        if(isBadVersion(mid)){
            helper(lft,mid-1);
        }
        else{ helper(mid+1,rht);}
        return 0;
    }
public:
    long long int firstBadVersion(int n) {
        // return helper(1,n);
        long long int left=1,right = n;
        while(left<=right){
            long long int mid = (right-left)/2+left;
            if(isBadVersion(mid) && !isBadVersion(mid-1)) return mid;
            else if(isBadVersion(mid)){
                right = mid-1;
            }
            else{
                left = mid+1;
            }
        }
        return -1;
    }
};