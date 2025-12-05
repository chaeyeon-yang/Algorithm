#include <vector>
#include <queue>
#include <cmath>
using namespace std;

int bfs(int start, vector<vector<int>>& graph, vector<bool>& visited) {
    queue<int> q;
    q.push(start);
    visited[start] = true;
    int cnt = 1;
    
    while(!q.empty()) {
        int cur = q.front(); q.pop();
        for(int nxt : graph[cur]) {
            if(!visited[nxt]) {
                visited[nxt] = true;
                q.push(nxt);
                cnt++;
            }
        }
    }
    return cnt;
}

int solution(int n, vector<vector<int>> wires) {
    int answer = 1e9;

    for(int cut = 0; cut < wires.size(); cut++) {
        vector<vector<int>> graph(n+1);
        
        // cut 번째 전선만 제외하고 그래프 구성
        for(int i = 0; i < wires.size(); i++) {
            if(i == cut) continue;
            int a = wires[i][0], b = wires[i][1];
            graph[a].push_back(b);
            graph[b].push_back(a);
        }

        vector<bool> visited(n+1, false);
        int size1 = bfs(1, graph, visited);
        int size2 = n - size1;

        answer = min(answer, abs(size1 - size2));
    }

    return answer;
}
