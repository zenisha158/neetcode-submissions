class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int len = nums.size();
        vector<int> res(2*len);
        for(int i=0;i<nums.size();i++)
        {
            res[i]=nums[i];
            res[i+len]=nums[i];
        }
        return res;
    }
};