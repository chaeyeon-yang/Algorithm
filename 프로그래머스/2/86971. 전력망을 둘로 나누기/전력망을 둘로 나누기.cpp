#include <string>
#include <vector>
#include <queue>
#include <iostream>

using namespace std;


int bfs(int cur, vector<vector<int>>& adj, vector<int>& visited) {
    queue<int> q;
    q.push(cur);
    visited[cur] = 1;
    int cnt = 1;
    while(!q.empty()) {
        int now = q.front();
        q.pop();
        for(int next: adj[now]) {
            if (!visited[next]) {
                visited[next] = 1;
                q.push(next);
                cnt++;
            }
        }
    }
    
    return cnt;
}


int solution(int n, vector<vector<int>> wires) {
    int answer = 101;
    
    
    // 인접리스트 생성
    for(int i=0; i<wires.size(); i++) {
        vector<vector<int>> adj(n+1);
        vector<int> visited(n+1);
        for(int j=0; j<wires.size(); j++) {
            if (i != j) {
                adj[wires[j][0]].push_back(wires[j][1]);
        adj[wires[j][1]].push_back(wires[j][0]);
            }
        }
        vector<int> conn;
        for(int i=1; i<=n; i++) {
            if (!visited[i]) {
                conn.push_back(bfs(i, adj, visited));
            }
        }
        answer = min(answer, abs(conn[1]-conn[0]));
    }
    
    return answer;
}