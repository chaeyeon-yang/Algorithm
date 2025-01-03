#include<bits/stdc++.h>
using namespace std;
// 연결요소 개수 찾기, 인접리스트
const int max_size = 54;
int a, b;
int t, m, n, k, adj[max_size][max_size], visited[max_size][max_size];
const int dy[4] = {-1,0,1,0};
const int dx[4] = {0, 1, 0, -1};

void dfs(int y, int x) {
  visited[y][x] = 1;
  for (int i = 0; i < 4; i++)
  {
    int ny = y + dy[i];
    int nx = x + dx[i];
    if (ny<0 || ny>=n || nx<0 || nx>=m || visited[ny][nx]) continue;
    if (adj[ny][nx] == 0) continue;
    dfs(ny, nx);
  }
  return;
}
int main() {
  cin >> t;
  for (int i = 0; i < t; i++) {
    int cnt = 0;
    cin >> m >> n >> k;
    memset(adj, 0, sizeof(adj));
    memset(visited, 0, sizeof(visited));

    for (int j = 0; j < k; j++)
    {
      cin >> a >> b;
      adj[b][a] = 1;
    }
    for (int t = 0; t < n; t++) {
      for (int r = 0; r < m; r++) {
        if (!visited[t][r] && adj[t][r] == 1) {
          cnt++;
          dfs(t, r);
        }
      }
    }
    cout << cnt << "\n";
  }
}