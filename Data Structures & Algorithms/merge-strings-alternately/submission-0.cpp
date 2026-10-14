class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int p1 = 0, p2 = 0;
        int len1 = word1.length();
        int len2 = word2.length();
        int len = min(len1, len2);
        
        string s;
        s.reserve(len1 + len2); // optimization

        // merge alternating
        for (int i = 0; i < len; i++) {
            s.push_back(word1[p1++]);
            s.push_back(word2[p2++]);
        }

        // append remaining
        while (p1 < len1) {
            s.push_back(word1[p1++]);
        }

        while (p2 < len2) {
            s.push_back(word2[p2++]);
        }

        return s;
    }
};
