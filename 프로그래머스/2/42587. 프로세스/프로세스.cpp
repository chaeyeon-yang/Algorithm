#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(vector<int> priorities, int location) {
    queue<pair<int, int>> q;
    priority_queue<int> pq;

    for (int i = 0; i < priorities.size(); i++) {
        q.push({priorities[i], i});
        pq.push(priorities[i]);
    }

    int answer = 0;

    while (!q.empty()) {
        int cur_priority = q.front().first;
        int cur_index = q.front().second;
        q.pop();

        if (cur_priority == pq.top()) {
            answer++;
            pq.pop();
            if (cur_index == location) {
                return answer;
            }
        } else {
            q.push({cur_priority, cur_index});
        }
    }

    return answer;
}