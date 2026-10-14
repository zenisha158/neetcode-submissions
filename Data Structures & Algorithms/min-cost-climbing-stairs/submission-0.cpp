class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        
        // Base cases
        int prev2 = cost[0]; // cost to reach step 0
        int prev1 = cost[1]; // cost to reach step 1
        
        // Compute min cost for each step
        for (int i = 2; i < n; i++) {
            int curr = cost[i] + min(prev1, prev2);
            prev2 = prev1;
            prev1 = curr;
        }
        
        // To reach the top, we can come from last or second last step
        return min(prev1, prev2);
    }
};
