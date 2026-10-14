class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int total = 0;
        int maxSum = nums[0], currMax = 0;
        int minSum = nums[0], currMin = 0;

        for (int n : nums) {
            currMax = max(n, currMax + n);
            maxSum = max(maxSum, currMax);

            currMin = min(n, currMin + n);
            minSum = min(minSum, currMin);

            total += n;
        }

        // All numbers negative
        if (maxSum < 0) return maxSum;

        return max(maxSum, total - minSum);
    }
};
