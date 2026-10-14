class Solution {
public:
    string convertToTitle(int n) {
        string result = "";

        while (n > 0) {
            n--;  // important adjustment
            char ch = 'A' + (n % 26);
            result = ch + result;
            n /= 26;
        }

        return result;
    }
};
