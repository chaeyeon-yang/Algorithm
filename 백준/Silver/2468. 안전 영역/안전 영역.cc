#include<bits/stdc++.h>

using namespace std;

int n, ret;

const int MAX = 100;
const int dy[4] = {-1, 0, 1, 0};
const int dx[4] = {0, 1, 0, -1};

// 아무지역도 물에 잠기지 않을 수도 있다.

int adj[MAX][MAX], visited[MAX][MAX];

void dfs(int y, int x, int h) {
  for (int i = 0; i < 4; i++)
  {
    int ny = y + dy[i];
    int nx = x + dx[i];
    if (ny<0|| ny>=n || nx<0 ||nx>=n||visited[ny][nx]) continue;
    if (adj[ny][nx] <= h) continue;
    visited[ny][nx] = 1;
    dfs(ny, nx, h);
  }
  return;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cin >> n;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> adj[i][j];
    }
  }
  for (int h = 1; h <= 100; h++) {
    int count_area = 0;
    memset(visited, 0, sizeof(visited));
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        if (!visited[i][j] && adj[i][j] > h) {
          dfs(i, j, h);
          count_area++;
        }
      }
    }
    ret = max(ret, count_area);
  }
  ret == 0 ? cout << 1 << endl : cout << ret << endl;
  return 0;
}