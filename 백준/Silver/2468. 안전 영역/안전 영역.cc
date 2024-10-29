#include<bits/stdc++.h>
using namespace std;

// 연결요소 개수
int n, adj[102][102], visited[102][102], a, res = 1;

int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, 1, 0, -1};

void dfs(int y, int x, int h) {
  visited[y][x] = 1;
  for (int i = 0; i < 4; i++) {
    int ny = y + dy[i];
    int nx = x + dx[i];
    if (ny<0 || ny>=n || nx<0 || nx>=n) continue;
    if (!visited[ny][nx] && adj[ny][nx] > h)
      dfs(ny, nx, h);
  }
  return;
}
int main()
{
  cin >> n;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> adj[i][j];
    }
  }
  for (int h = 1; h < 101; h++) {
    int cnt = 0;
    memset(visited, 0, sizeof(visited));
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        if (adj[i][j] > h && !visited[i][j]) {
          dfs(i, j, h);
          cnt++;
        }
      }
    }
    res = max(res, cnt);
  }
  cout << res << "\n";
  return 0;
}