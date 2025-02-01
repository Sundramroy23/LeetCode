#include <bits/stdc++.h>

class Solution {
public:
    int missingNumber(vector<int>& arr) {
        int sumTot=(arr.size())*(arr.size()+1)/2;
        int ansTemp=accumulate(arr.begin(),arr.end(),0);
        return (sumTot-ansTemp);
    }
};