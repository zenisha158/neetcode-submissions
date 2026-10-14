class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> m;
        vector<int> ans;
        vector<pair<int,int>> freq;
         
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }

      
        for(auto it : m) {
            freq.push_back({it.second, it.first});
        }

        // sort by frequency descending
        sort(freq.begin(), freq.end(), greater<>());

        // take top k elements
        for(int i = 0; i < k; i++) {
            ans.push_back(freq[i].second);
        }
        return ans;
    }
};
