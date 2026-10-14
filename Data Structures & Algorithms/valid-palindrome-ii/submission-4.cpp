class Solution {
public:
   bool validPalindrome(string s) {
    int start = 0, end = s.length() - 1;
    int count = 0;

    while (start < end) {
        if (s[start] != s[end]) {
            // Try skipping left OR skipping right
            // Check both possibilities
            int s1 = start + 1, e1 = end;
            int s2 = start, e2 = end - 1;

            // Check skipping left char
            bool skipLeft = true;
            while (s1 < e1) {
                if (s[s1] != s[e1]) { skipLeft = false; break; }
                s1++; e1--;
            }

            // Check skipping right char
            bool skipRight = true;
            while (s2 < e2) {
                if (s[s2] != s[e2]) { skipRight = false; break; }
                s2++; e2--;
            }

            return skipLeft || skipRight;
        }
        start++;
        end--;
    }
    return true;
}

};