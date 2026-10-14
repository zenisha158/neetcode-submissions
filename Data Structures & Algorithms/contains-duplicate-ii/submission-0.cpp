class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
    int start = 0;

    while (start < nums.size()) {

        int end = start + 1;  // move end relative to start

        while (end < nums.size() && (end - start) <= k) {

            if (nums[start] == nums[end]) {
                return true;
            }

            end++;
        }

        start++;
    }

    return false;
}


};