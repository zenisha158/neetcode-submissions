#include <stack>
#include <string>
using namespace std;

class Solution {
public:
    string decodeString(string s) {

        stack<string> strStack;
        stack<int> numStack;

        string current = "";
        int num = 0;

        for (char c : s) {

            if (isdigit(c)) {
                num = num * 10 + (c - '0');
            }

            else if (c == '[') {
                numStack.push(num);
                strStack.push(current);

                num = 0;
                current = "";
            }

            else if (c == ']') {
                int repeat = numStack.top();
                numStack.pop();

                string prev = strStack.top();
                strStack.pop();

                string temp = "";

                for (int i = 0; i < repeat; i++) {
                    temp += current;
                }

                current = prev + temp;
            }

            else {
                current += c;
            }
        }

        return current;
    }
};