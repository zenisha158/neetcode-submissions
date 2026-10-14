class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0; // pointer for new array without 'val'

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != val) {
                nums[k] = nums[i]; // copy over good elements
                k++;
            }
        }

        return k;
        }
};