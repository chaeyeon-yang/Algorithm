#include <iostream>
#include <vector>
#include <queue>
#include <iostream>

using namespace std;

void bfs(int cur, vector<vector<pair<int, int>>>& adj, vector<int>& visited) {
    queue<pair<int,int>> q;
    q.push(make_pair(cur, 0));
    visited[cur]=0;
    while(!q.empty()) {
        auto [conn, cost] = q.front();
        q.pop();
        for(auto& next: adj[conn]) {
            auto [n_conn, n_cost] = next;
            if (visited[conn] + n_cost < visited[n_conn]) {
                visited[n_conn] = visited[conn]+n_cost;
                q.push(make_pair(n_conn, visited[n_conn]));
            }
        }
    }
}

int solution(int N, vector<vector<int>> road, int K) {
    int answer = 0;
    vector<vector<pair<int, int>>> adj(N+1);
    vector<int> visited(N+1, 1e9);
    
    int a = road.size();
    int b = road[0].size();
    
    for(int i=0; i<a; i++) {
        adj[road[i][0]].push_back(make_pair(road[i][1], road[i][2]));
        adj[road[i][1]].push_back(make_pair(road[i][0], road[i][2]));
    }
    bfs(1, adj, visited);
    
    
    for(int i=1; i<=N; i++) {
        if (visited[i]<=K) answer++;
    }
    

    return answer;
}