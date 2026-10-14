class Solution {
public:
   bool isPalindrome(string s) {
    int start = 0;
    int end = s.size() - 1;

    while (start < end) {

        // Skip non-alphanumeric characters
        while (start < end && !isValidChar(s[start])) start++;
        while (start < end && !isValidChar(s[end])) end--;

        // Compare characters (case-insensitive)
        if (tolower(s[start]) != tolower(s[end])) {
            return false;
        }

        start++;
        end--;
    }

    return true;
}

bool isValidChar(char c) {
    return (c >= 'a' && c <= 'z') ||
           (c >= 'A' && c <= 'Z') ||
           (c >= '0' && c <= '9');
}

};
