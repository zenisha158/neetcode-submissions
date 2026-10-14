class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxProd = nums[0];
        int minProd = nums[0];
        int ans = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            int x = nums[i];

            int tempMax = max({x, x * maxProd, x * minProd});
            minProd = min({x, x * maxProd, x * minProd});
            maxProd = tempMax;

            ans = max(ans, maxProd);
        }

        return ans;
    }
};

