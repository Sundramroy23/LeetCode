class Solution {

    bool helper(vector<int> & ranks,long long num,long long cars){
        long long numCars = 0;
        for(auto i:ranks){
            numCars+= (sqrt(num/i));
        }
        if(numCars>=cars) return true;
        return false;
    }

public:
    long long repairCars(vector<int>& ranks, int cars) {
        long long  left = 1, right = (long long) *min_element(ranks.begin(), ranks.end()) * (long long) cars * cars;
    long long ans = right;
    while(left<=right){
        long long mid = left + (right - left) / 2;
        if(helper(ranks,mid,cars)){
            ans = mid;
            right = mid -1;
        }
        else{
            left = mid+1;
        }
    }
       return ans; 
    }
};