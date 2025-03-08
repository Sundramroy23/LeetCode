class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int n = blocks.size();
        int min_ops = k; // Maximum possible white blocks in a window
        int current_white_count = 0;

        // Count 'W' in the first window of size k
        for (int i = 0; i < k; i++) {
            if (blocks[i] == 'W') {
                current_white_count++;
            }
        }
        min_ops = current_white_count;

        // Slide the window across the string
        for (int i = k; i < n; i++) {
            if (blocks[i - k] == 'W') {  // Remove outgoing character from the window
                current_white_count--;
            }
            if (blocks[i] == 'W') {  // Add new incoming character to the window
                current_white_count++;
            }
            min_ops = min(min_ops, current_white_count);
        }

        return min_ops;
    }
};
