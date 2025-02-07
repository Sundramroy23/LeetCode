class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.length() - 1;
        int j = b.length() - 1;
        int carry = 0;
        string ans = "";

        while (i >= 0 || j >= 0 || carry) {
            int sum = carry;
            if (i >= 0) sum += a[i--] - '0';  // Convert char to int
            if (j >= 0) sum += b[j--] - '0';

            ans.push_back((sum % 2) + '0');  // Append the binary sum result
            carry = sum / 2;  // Update carry
        }

        reverse(ans.begin(), ans.end());  // Reverse to get the correct order
        return ans;
    }
};
