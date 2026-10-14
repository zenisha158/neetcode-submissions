class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans;

        for(int i = 0; i < numbers.size(); i++) {
            for(int j = i + 1; j < numbers.size(); j++) {
                if(numbers[i] + numbers[j] == target) {
                    ans.push_back(i + 1); // index is 1-based
                    ans.push_back(j + 1);
                    return ans; // only one solution exists
                }
            }
        }
        return ans;
    }
};
