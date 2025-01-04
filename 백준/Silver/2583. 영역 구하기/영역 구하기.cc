#include<bits/stdc++.h>
using namespace std;
int m, n, k, adj[104][104], visited[104][104];
int a, b, c, d, cnt;
vector<int> res;
const int dy[4] = {-1, 0, 1, 0};
const int dx[4] = {0,1,0,-1};

int dfs(int y, int x) {
  visited[y][x] = 1;
  int size = 1;
  for (int i = 0; i < 4; i++) {
    int ny = y + dy[i];
    int nx = x + dx[i];
    if (ny<0 || ny >= m || nx<0 || nx>=n || visited[ny][nx] || adj[ny][nx]) continue;
    size += dfs(ny, nx);
  }
  return size;
}
int main() {
  cin >> m >> n >> k;
  for (int i = 0; i < k; i++) {
    cin >> a >> b >> c >> d;
    for (int t = a; t < c; t++) {
      for (int r = b; r < d; r++) {
        adj[r][t] = 1;
      }
    }
  }

  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      if(!visited[i][j] && adj[i][j] == 0) {
        res.push_back(dfs(i, j));
        cnt++;
      }
    }
  }
  cout << cnt << "\n";
  sort(res.begin(), res.end());
  for (int i : res) {
    cout << i << " ";
  }
  return 0;
}