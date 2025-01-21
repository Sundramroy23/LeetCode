class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) {
        return "";
    }

    // Start with the first string as the initial prefix
    string prefix = strs[0];

    // Compare the prefix with each string in the list
    for (int i = 1; i < strs.size(); i++) {
        while (strs[i].find(prefix) != 0) {
            // Gradually reduce the prefix
            prefix = prefix.substr(0, prefix.size() - 1);

            // If the prefix becomes empty, return ""
            if (prefix.empty()) {
                return "";
            }
        }
    }

    return prefix;
    }
};