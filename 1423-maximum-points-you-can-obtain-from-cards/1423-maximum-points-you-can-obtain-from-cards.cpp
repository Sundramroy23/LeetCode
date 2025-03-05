class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int lSum = 0, rSum = 0;
        int l = k - 1, r = cardPoints.size()-1;

        for (int i = 0; i < k; i++) lSum += cardPoints[i];
        int ans = lSum + rSum;
        int i;
        for (i = 0; i < k; i++) {
            lSum -= cardPoints[l - i];
            rSum += cardPoints[r - i];
            ans = max(ans, lSum + rSum);
        }
        // ans = max(ans, rSum + cardPoints[--i]);
        return ans;
    }
};