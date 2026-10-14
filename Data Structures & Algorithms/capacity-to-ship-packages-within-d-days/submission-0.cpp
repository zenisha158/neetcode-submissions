#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:

    int calculateDays(vector<int>& weights, int capacity) {
        int days = 1;
        int currentLoad = 0;

        for (int w : weights) {
            if (currentLoad + w > capacity) {
                days++;
                currentLoad = 0;
            }
            currentLoad += w;
        }

        return days;
    }

    int shipWithinDays(vector<int>& weights, int days) {

        int low = *max_element(weights.begin(), weights.end());
        int high = 0;

        for (int w : weights) {
            high += w;
        }

        int ans = high;

        while (low <= high) {

            int mid = low + (high - low) / 2;

            int requiredDays = calculateDays(weights, mid);

            if (requiredDays <= days) {
                ans = mid;
                high = mid - 1;  // try smaller capacity
            } else {
                low = mid + 1;   // need bigger capacity
            }
        }

        return ans;
    }
};