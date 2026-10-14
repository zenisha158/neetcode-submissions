#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:

    vector<vector<int>> result;
    vector<int> path;

    void backtrack(vector<int>& candidates,
                   int target,
                   int start) {

        // Found valid combination
        if (target == 0) {
            result.push_back(path);
            return;
        }

        // Explore choices
        for (int i = start; i < candidates.size(); i++) {

            // Skip duplicates
            if (i > start &&
                candidates[i] == candidates[i - 1]) {
                continue;
            }

            // Stop if target exceeded
            if (candidates[i] > target) {
                break;
            }

            // Choose
            path.push_back(candidates[i]);

            // Recurse
            backtrack(candidates,
                      target - candidates[i],
                      i + 1);

            // Undo choice
            path.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates,
                                        int target) {

        sort(candidates.begin(), candidates.end());

        backtrack(candidates, target, 0);

        return result;
    }
};