#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int> window;  // This will hold elements in the current sliding window

        for (int i = 0; i < nums.size(); i++) {
            // If current number already exists in the window, we found a duplicate
            if (window.find(nums[i]) != window.end()) {
                return true;
            }

            // Add current number to the window
            window.insert(nums[i]);

            // Maintain window size of at most k
            if (window.size() > k) {
                window.erase(nums[i - k]);
            }
        }

        return false;
    }
};

