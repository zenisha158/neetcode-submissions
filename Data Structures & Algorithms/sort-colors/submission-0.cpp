class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zero = 0, one = 0, two = 0;

        // Count occurrences
        for (int num : nums) {
            if (num == 0) zero++;
            else if (num == 1) one++;
            else two++;
        }

        // Overwrite array
        int k = 0;

        // Fill zeros
        for (int i = 0; i < zero; i++)
            nums[k++] = 0;

        // Fill ones
        for (int i = 0; i < one; i++)
            nums[k++] = 1;

        // Fill twos
        for (int i = 0; i < two; i++)
            nums[k++] = 2;
    }
};
