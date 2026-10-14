#include <vector>
#include <string>
#include <sstream>
using namespace std;

class Solution {
public:
    string simplifyPath(string path) {

        vector<string> st;
        string token;

        stringstream ss(path);

        while (getline(ss, token, '/')) {

            if (token == "" || token == ".") {
                continue;
            }

            if (token == "..") {

                if (!st.empty()) {
                    st.pop_back();
                }
            }
            else {
                st.push_back(token);
            }
        }

        if (st.empty()) {
            return "/";
        }

        string result = "";

        for (string dir : st) {
            result += "/" + dir;
        }

        return result;
    }
};