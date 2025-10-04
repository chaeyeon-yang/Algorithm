#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    queue<pair<int, int>> bridge;
    int time = 0;
    int total_weight = 0;
    int idx = 0; 

    while (idx < truck_weights.size() || !bridge.empty()) {
        time++;
        if (!bridge.empty() && time - bridge.front().second >= bridge_length) {
            total_weight -= bridge.front().first;
            bridge.pop();
        }


        if (idx < truck_weights.size() && total_weight + truck_weights[idx] <= weight) {
            total_weight += truck_weights[idx];
            bridge.push({truck_weights[idx], time});
            idx++;
        }
    }

    return time;
}
