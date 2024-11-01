#include<bits/stdc++.h>
using namespace std;

// dfs, 이차원 배열, 연결요소 개수(오름차순으로), 각 연결요소의 수
int n, adj[25][25], visited[25][25], con;
vector<int> res;

const int dy[4] = {-1, 0, 1, 0};
const int dx[4] = {0, 1, 0, -1};

int dfs(int j, int i, int con) {
  int cnt = 1;
  visited[j][i] = con;
  for (int a = 0; a < 4; a++) {
    int ny = j + dy[a];
    int nx = i + dx[a];
    if (ny<0 || ny >=n || nx<0 || nx>=n || visited[ny][nx]) continue;
    if (adj[ny][nx] && !visited[ny][nx]) {
      adj[ny][nx] = con;
      cnt += dfs(ny, nx, con);
    }
  }
  return cnt;
}

int main() {
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      scanf("%1d", &adj[i][j]);
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (adj[j][i] && !visited[j][i]) {
        con++;
        int tmp = dfs(j, i, con);
        res.push_back(tmp);
      }
    }
  }
  cout << con << "\n";
  sort(res.begin(), res.end());
  for (int nxt : res) {
    cout << nxt << "\n";
  }
}