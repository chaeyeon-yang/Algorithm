#include <queue>
#include <vector>

using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    queue<int> bridge;
    int time = 0;
    int total_weight = 0;
    int i = 0;

    for (int j = 0; j < bridge_length; j++) bridge.push(0);

    while (i < truck_weights.size()) {
        time++;
        total_weight -= bridge.front();
        bridge.pop();

        if (total_weight + truck_weights[i] <= weight) {
            bridge.push(truck_weights[i]);
            total_weight += truck_weights[i];
            i++; 
        } else {
            bridge.push(0); 
        }
    }

    return time + bridge_length;
}
