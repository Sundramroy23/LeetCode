class Solution {
public:
    vector<int> closestPrimes(int left, int right) {
        int N = 1e6 + 1;
        // Initialize sieve: 1 means prime
        vector<int> sieve(N, 1);
        sieve[0] = sieve[1] = 0;
        
        // Sieve of Eratosthenes
        for (int i = 2; i * i < N; i++) {
            if (sieve[i] == 1) {
                for (int j = i * i; j < N; j += i) {
                    sieve[j] = 0;
                }
            }
        }
        
        int prev = -1;
        int diff = INT_MAX;
        vector<int> ans = {-1, -1};
        
        // Traverse the range [left, right] to find closest prime pair
        for (int i = left; i <= right; i++) {
            if (sieve[i] == 1) { // i is prime
                if (prev != -1) {
                    if (i - prev < diff) {
                        diff = i - prev;
                        ans[0] = prev;
                        ans[1] = i;
                    }
                }
                prev = i;
            }
        }
        
        return ans;
    }
};
