#include<bits/stdc++.h>

using namespace std;

int r, c, min_x = 20, max_x = -1, min_y=20, max_y = -1;
const int dy[4] = {-1, 0, 1, 0};
const int dx[4] = {0, 1, 0, -1};

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  vector<pair<int, int>> v;
  cin >> r >> c;
  char adj[r][c];
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      cin >> adj[i][j];
    }
  }

  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      if (adj[i][j] == 'X') {
        int cnt = 0;
        for (int a = 0; a < 4; a++) {
          int ny = i + dy[a];
          int nx = j + dx[a];
          if (ny<0 || nx<0 || ny>=r || nx>=c|| adj[ny][nx] == '.') cnt++;
        }
        if (cnt >= 3) {
          v.push_back({i, j});
        }
      }
    }
  }

  for (int i = 0; i < v.size(); i++) {
    adj[v[i].first][v[i].second] = '.';
  }

  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++){
      if (adj[i][j] == 'X') {
        min_x = min(min_x, j);
        max_x = max(max_x, j);
        min_y = min(min_y, i);
        max_y = max(max_y, i);
      }
    }
  }

  for (int i = min_y; i <= max_y; i++) {
    for (int j = min_x; j <= max_x; j++) {
      cout << adj[i][j];
    }
    cout << "\n";
  }

    return 0;
}