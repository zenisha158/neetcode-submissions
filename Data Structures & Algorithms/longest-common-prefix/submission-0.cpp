class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
    if (strs.empty()) return "";

    // Take the first string as reference
    string prefix = strs[0];

    // Compare prefix with each string
    for (int i = 1; i < strs.size(); i++) {
        // Shrink prefix until it matches the current string
        while (strs[i].find(prefix) != 0) {
            prefix.pop_back();   // remove last character
            if (prefix.empty()) return "";
        }
    }

    return prefix;
}

};