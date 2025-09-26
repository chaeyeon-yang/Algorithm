#include <string>
#include <queue>

using namespace std;

int solution(vector<int> priorities, int location) {
    // 2 1 3 2 => 1 3 2 2 => 3 2 2 1 => 3 
    // 2 2 1
    int answer = 0;
    priority_queue<int> pq;
    queue<pair<int, int>> q;
    for(int i: priorities) {
        pq.push(i);
    }
    for(int i=0; i<priorities.size(); i++) {
        q.push({i, priorities[i]});
    }

    int cnt = 0;
    while(!q.empty()) {
        int cur_index = q.front().first;
        int cur_val = q.front().second;
        int ma = pq.top();
        if (cur_val < ma) {
            q.pop();
            q.push({cur_index, cur_val});
        }
        if (cur_val == ma) {
            cnt++;
            if (cur_index == location) {
                return cnt;
            }
            pq.pop();
            q.pop();
        }
    }
   
    return answer;
}