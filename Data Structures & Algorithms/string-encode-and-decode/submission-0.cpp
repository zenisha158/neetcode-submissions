#include <vector>
#include <string>
using namespace std;

class Solution {
public:

    // Encodes a list of strings to a single string.
    string encode(vector<string>& strs) {
        string result = "";

        for (string s : strs) {
            result += to_string(s.size()) + "#" + s;
        }

        return result;
    }

    // Decodes a single string to a list of strings.
    vector<string> decode(string s) {
        vector<string> result;

        int i = 0;

        while (i < s.size()) {

            // Find delimiter #
            int j = i;

            while (s[j] != '#') {
                j++;
            }

            // Length of current word
            int length = stoi(s.substr(i, j - i));

            // Move to start of actual word
            j++;

            // Extract word
            string word = s.substr(j, length);

            result.push_back(word);

            // Move i to next encoded string
            i = j + length;
        }

        return result;
    }
};