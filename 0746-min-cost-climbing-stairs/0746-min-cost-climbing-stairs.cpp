class Solution {

public:
    int minCostClimbingStairs(vector<int>& cost) {
        int prevOne = 0,prevTwo = 0;
        for(int i=2;i<=cost.size();i++){
            int curr = min(prevOne+cost[i-1],prevTwo+cost[i-2]);
            prevTwo = prevOne;
            prevOne = curr;
        }
        return prevOne;
    }
};