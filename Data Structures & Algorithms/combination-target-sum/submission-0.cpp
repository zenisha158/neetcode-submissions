class Solution {
public:
    vector<vector<int>> res;

    void dfs(int i, vector<int>& nums, int target, vector<int>& path) {
        if (target == 0) {
            res.push_back(path);
            return;
        }

        if (i >= nums.size() || target < 0)
            return;

        // include current
        path.push_back(nums[i]);
        dfs(i, nums, target - nums[i], path);

        // backtrack
        path.pop_back();

        // skip current
        dfs(i + 1, nums, target, path);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> path;
        dfs(0, candidates, target, path);
        return res;
    }
};