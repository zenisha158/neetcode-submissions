class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        int ans = nums[0];
        int maxFreq = mp[nums[0]];
        for(auto it : mp) {
            if(it.second > maxFreq) {
                maxFreq = it.second;
                ans = it.first;
            }
        }
        return ans;
    }
};