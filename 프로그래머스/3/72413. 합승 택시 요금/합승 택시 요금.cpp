#include <string>
#include <vector>
#include <queue>
#include <iostream>

using namespace std;

void bfs(int cur, vector<vector<pair<int, int>>>& adj,
        vector<int>& visited) {
    queue<pair<int,int>> q;
    q.push({cur, 0});
    visited[cur] = 0;
    while(!q.empty()) {
        auto [path, cost] = q.front();
        q.pop();
        for(auto next: adj[path]) {
            auto [n_path, n_cost] = next;
            if (visited[path] + n_cost < visited[n_path]) {
                visited[n_path] = visited[path] + n_cost;
                q.push({n_path, visited[n_path]});
            }
        }
    }
}

int solution(int n, int s, int a, int b, vector<vector<int>> fares) {
    vector<vector<pair<int, int>>> adj(n+1);    
    
    for(int i=0; i<fares.size(); i++) {
        adj[fares[i][0]].push_back(make_pair(fares[i][1], fares[i][2]));
        adj[fares[i][1]].push_back(make_pair(fares[i][0], fares[i][2]));
    }
    
    vector<int> from_s(n + 1, 1e9), from_a(n + 1, 1e9), from_b(n + 1, 1e9);
    bfs(s, adj, from_s);
    bfs(a, adj, from_a);
    bfs(b, adj, from_b);

    int answer = 1e9;
    for (int k = 1; k <= n; k++) {
        if (from_s[k] == 1e9 || from_a[k] == 1e9 || from_b[k] == 1e9) continue;
        answer = min(answer, from_s[k] + from_a[k] + from_b[k]);
    }
    
    return answer;
}