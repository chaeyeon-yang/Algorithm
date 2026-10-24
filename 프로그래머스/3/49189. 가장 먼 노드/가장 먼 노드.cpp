#include <string>
#include <vector>
#include <stack>
#include <iostream>
#include <queue>

using namespace std;

int max_v = 0;

void bfs(int cur, vector<vector<int>>& adj, vector<int>& visited) {
    queue<int> q;
    q.push(cur);
    visited[cur] = 1;
    while(!q.empty()) {
        int now = q.front();
        q.pop();
        for(int next: adj[now]) {
            if(!visited[next]) {
                visited[next] = visited[now] + 1;
                max_v = max(max_v, visited[next]);
                q.push(next);
            }
            
        }
    }
}

int solution(int n, vector<vector<int>> edge) {
    int answer = 0;
    
    //무방향 그래프 
    vector<vector<int>> adj(n+1);
    vector<int> visited(n+1);
    
    for(int i=0; i<edge.size(); i++) {
        adj[edge[i][0]].push_back(edge[i][1]);
        adj[edge[i][1]].push_back(edge[i][0]);
    }
    
    bfs(1, adj, visited);
    
    for(int i=0; i<n+1; i++) {
        if (visited[i] == max_v) answer++;
    }
    
    return answer;
}