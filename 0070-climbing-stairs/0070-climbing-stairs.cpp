class Solution {
public:
    int climbStairs(int n) {
        int prevOne = 1;
        int prevTwo = 1;
        for(int i=1;i<n;i++){
            int temp = prevOne+prevTwo;
            prevTwo = prevOne;
            prevOne = temp;
        }
        return prevOne;
    }
};