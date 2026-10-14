#include <queue>
#include <vector>
using namespace std;

class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> maxHeap;

        // Step 1: Add all stones
        for (int stone : stones) {
            maxHeap.push(stone);
        }

        // Step 2: Smash stones
        while (maxHeap.size() > 1) {
            int first = maxHeap.top(); maxHeap.pop();
            int second = maxHeap.top(); maxHeap.pop();

            if (first != second) {
                maxHeap.push(first - second);
            }
        }

        // Step 3: Return result
        return maxHeap.empty() ? 0 : maxHeap.top();
    }
};