#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int carFleet(int target,
                 vector<int>& position,
                 vector<int>& speed) {

        vector<pair<int,double>> cars;

        int n = position.size();

        // Store position and time
        for (int i = 0; i < n; i++) {

            double time =
                (double)(target - position[i]) / speed[i];

            cars.push_back({position[i], time});
        }

        // Sort by position descending
        sort(cars.rbegin(), cars.rend());

        int fleets = 0;
        double maxTime = 0;

        for (auto& car : cars) {

            double time = car.second;

            // New fleet
            if (time > maxTime) {
                fleets++;
                maxTime = time;
            }
        }

        return fleets;
    }
};