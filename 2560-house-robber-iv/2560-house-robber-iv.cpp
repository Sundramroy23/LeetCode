#include <vector>
#include <set>
using namespace std;

class Solution {
public:
    int minCapability(vector<int>& nums, int k) {
        set<int> unique_nums(nums.begin(), nums.end());
        vector<int> sorted(unique_nums.begin(), unique_nums.end());
        int left = 0, right = sorted.size() - 1;
        
        while (left < right) {
            int mid = left + (right - left) / 2;
            if (isPossible(sorted[mid], nums, k)) {
                right = mid;
            } else {
                left = mid + 1;
            }
        }
        return sorted[left];
    }
    
private:
    bool isPossible(int x, vector<int>& nums, int k) {
        int prev_prev = 0, prev = 0, curr = 0;
        for (int num : nums) {
            if (num <= x) {
                curr = max(prev, prev_prev + 1);
            } else {
                curr = prev;
            }
            prev_prev = prev;
            prev = curr;
        }
        return curr >= k;
    }
};