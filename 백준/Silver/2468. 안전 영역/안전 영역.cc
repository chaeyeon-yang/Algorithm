#include<bits/stdc++.h>
using namespace std;
int n, adj[104][104], visited[104][104];
int res = 1;
const int dy[4] = {-1, 0, 1, 0};
const int dx[4] = {0, 1, 0, -1};

// dfs
void dfs(int y, int x, int h) {
  visited[y][x] = 1;
  for (int i = 0; i < 4; i++) {
    int ny = y + dy[i];
    int nx = x + dx[i];
    if (ny<0 || ny>=n || nx<0 || nx>=n || visited[ny][nx]) continue;
    if (adj[ny][nx] <= h) continue;
    dfs(ny, nx, h);
  }
  return;
}

int main() {
  cin >> n;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> adj[i][j];
    }
  }
  for (int i = 1; i < 101; i++)  {
    int cnt = 0;
    memset(visited, 0, sizeof(visited));
    for (int a = 0; a < n; a++) {
      for (int b = 0; b < n; b++) {
        if(adj[a][b] > i && !visited[a][b]) {
          dfs(a, b, i);
          cnt++;
        }
      }
    }
    res = max(res, cnt);
  }
  cout << res << "\n";
}