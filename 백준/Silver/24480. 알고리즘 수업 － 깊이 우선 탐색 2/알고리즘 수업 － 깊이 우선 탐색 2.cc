#include <bits/stdc++.h>
using namespace std;

int n, m, r, a, b;
vector<int> adj[100001]; // 인접 리스트
int visited[100001]; // 방문 순서 저장 배열
int order = 1;

void dfs(int r) {
    visited[r] = order++; // 방문 순서를 기록
    for (int v : adj[r]) {
        if (visited[v] == 0) { // 아직 방문하지 않은 정점이라면
            dfs(v);
        }
    }
}

int main() {
    cin >> n >> m >> r;
    for (int i = 0; i < m; i++) {
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a); 
    }
  
    // 인접 리스트 내림차순 정렬
    for (int i = 1; i <= n; i++) {
        sort(adj[i].rbegin(), adj[i].rend());
    }
  
    dfs(r);

    // 각 정점의 방문 순서 출력 (1부터 N까지 출력)
    for (int i = 1; i <= n; i++) {
        cout << visited[i] << "\n";
    }
}
