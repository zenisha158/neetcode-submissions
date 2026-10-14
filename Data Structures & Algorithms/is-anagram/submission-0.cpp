class Solution {
public:
   bool isAnagram(string s, string t) {
    if (s.length() != t.length()) 
        return false;

    map<char, int> str1, str2;

    for (char e : s) str1[e]++;
    for (char e : t) str2[e]++;

    for (auto it : str1) {
        if (it.second != str2[it.first]) 
            return false;
    }

    return true;
}

};
