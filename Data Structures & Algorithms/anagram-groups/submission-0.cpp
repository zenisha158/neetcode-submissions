#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;

        for (string s : strs) {
            string key = s;
            sort(key.begin(), key.end());   // create sorted key
            mp[key].push_back(s);           // group original string
        }

        vector<vector<string>> result;
        for (auto& it : mp) {
            result.push_back(it.second);
        }

        return result;
    }
};