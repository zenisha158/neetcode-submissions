#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {

        unordered_map<int, int> prefixMap;

        // Handles subarrays starting from index 0
        prefixMap[0] = 1;

        int currentSum = 0;
        int count = 0;

        for (int num : nums) {

            currentSum += num;

            // Check if needed prefix sum exists
            if (prefixMap.count(currentSum - k)) {
                count += prefixMap[currentSum - k];
            }

            // Store current prefix sum
            prefixMap[currentSum]++;
        }

        return count;
    }
};