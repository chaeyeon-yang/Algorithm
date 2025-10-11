#include<bits/stdc++.h>

using namespace std;

int adj[54][54];
int n, m, r, c, d, answer;
// d-0(북), d-1(동), d-2(남), d-3(서)

const int dy[4] = {-1, 0, 1, 0};
const int dx[4] = {0, 1, 0, -1};

void dfs(int y, int x, int dir) {
  if (adj[y][x] == 0) {
    adj[y][x] = 2;
    answer++;
  }

  for (int i = 0; i < 4; i++) {
    dir = (dir + 3) % 4;
    int ny = y + dy[dir];
    int nx = x + dx[dir];
    if (adj[ny][nx]==0){
      dfs(ny, nx, dir);
      return;
    }
  }
  int back_dir = (dir + 2) % 4;
  int by = y + dy[back_dir];
  int bx = x + dx[back_dir];
  if (adj[by][bx]!=1)
    dfs(by, bx, dir);
}
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cin >> n >> m >> r >> c >> d;
  
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> adj[i][j];
    }
  }
  dfs(r, c, d);
  cout << answer << endl;

  return 0;
}