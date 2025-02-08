class Solution {
public:
    bool isPalindrome(string s) {
        int lftPtr = 0, rhtPtr = s.length() - 1;
        
        while (lftPtr < rhtPtr) {
            // Move left pointer if not alphanumeric
            while (lftPtr < rhtPtr && !isalnum(s[lftPtr])) lftPtr++;
            // Move right pointer if not alphanumeric
            while (lftPtr < rhtPtr && !isalnum(s[rhtPtr])) rhtPtr--;
            
            // Compare characters after converting to lowercase
            if (tolower(s[lftPtr]) != tolower(s[rhtPtr])) {
                return false;
            }
            
            // Move both pointers towards the center
            lftPtr++;
            rhtPtr--;
        }
        
        return true; // If loop completes, it's a palindrome
    }
};
