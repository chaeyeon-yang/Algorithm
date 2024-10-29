#include<bits/stdc++.h>
using namespace std;

// 연결요소 개수
// 인접행렬, dfs
int t, m, n, k, adj[52][52], visited[52][52], y, x;
int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, 1, 0, -1};

void dfs(int y, int x) {
  visited[y][x] = 1;
  for (int i = 0; i < 4; i++){
    int ny = y + dy[i];
    int nx = x + dx[i];
    if (ny<0 || ny >=n || nx<0 || nx >=m || adj[ny][nx]== 0) continue;
    if (visited[ny][nx]) continue;
    dfs(ny, nx);
  }
  return;
}

int main() {
  cin >> t;
  for (int i = 0; i < t; i++) {
    cin >> m >> n >> k;
    int cnt = 0;
    memset(adj, 0, sizeof(adj));
    memset(visited, 0, sizeof(visited));
    for (int i = 0; i < k; i++)
    {
      cin >> x >> y;
      adj[y][x] = 1;
    }
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        if (adj[i][j] == 1 && !visited[i][j]) {
          cnt++;
          dfs(i, j);
        }
      }
    }
    cout << cnt << "\n";
  }
  
  return 0;
}