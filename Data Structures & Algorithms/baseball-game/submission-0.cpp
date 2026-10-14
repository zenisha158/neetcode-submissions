class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;

        for (string op : operations) {

            // Case 1: Integer value
            if (op != "C" && op != "D" && op != "+") {
                st.push(stoi(op));
            }
            // Case 2: "C" → remove last score
            else if (op == "C") {
                st.pop();
            }
            // Case 3: "D" → double last score
            else if (op == "D") {
                st.push(st.top() * 2);
            }
            // Case 4: "+" → sum of last two scores
            else if (op == "+") {
                int a = st.top(); st.pop();  // last element
                int b = st.top();            // second last element
                st.push(a);                  // push a back
                st.push(a + b);              // push new score
            }
        }

        int sum = 0;
        while (!st.empty()) {
            sum += st.top();
            st.pop();
        }

        return sum;
    }
};
