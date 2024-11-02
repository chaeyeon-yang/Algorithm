#include<bits/stdc++.h>
using namespace std;

int n, m, visited[602][602], cnt, sx, sy;
char adj[602][602];
const int dy[4] = {-1, 0, 1, 0};
const int dx[4] = {0, 1, 0, -1};

void dfs(int j, int i) {
  visited[j][i] = 1;
  for (int a = 0; a < 4; a++)
  {
    int ny = j + dy[a];
    int nx = i + dx[a];
    if (ny<0 || ny>=n || nx<0 || nx>=m) continue;
    if (!visited[ny][nx] and adj[ny][nx] != 'X') {
      if (adj[ny][nx] == 'P') {
        cnt++;
      }
      dfs(ny, nx);
    }
  }
}

int main() {
  scanf("%d %d", &n, &m);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      scanf(" %c", &adj[i][j]);
    }
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if(adj[i][j] == 'I') {
        sy = i;
        sx = j;
        break;
      }
    }
  }

  dfs(sy, sx);
  if (cnt) cout << cnt << "\n";
  else
    cout << "TT" << "\n";
  return 0;
}