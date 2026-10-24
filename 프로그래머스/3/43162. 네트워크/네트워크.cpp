#include <string>
#include <vector>
#include <iostream>
#include <queue>

using namespace std;


void dfs(int cur, vector<vector<int>>& adj, vector<bool>& visited) {
    visited[cur] = true;
    for (int next : adj[cur]) {
        if (!visited[next]) dfs(next, adj, visited);
    }
}

int solution(int n, vector<vector<int>> computers) {
    int answer = 0;
    
    vector<vector<int>> adj(n);
    vector<bool> visited(n, false);
    
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if (i!=j&&computers[i][j]==1) {
                adj[i].push_back(j);
            }
        }
    }
    for(int i=0; i<n; i++) {
        if (!visited[i]) {
            dfs(i, adj, visited);
            answer++;
        }
    }
    
    return answer;
}