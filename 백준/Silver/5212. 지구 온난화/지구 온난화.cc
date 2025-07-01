#include<bits/stdc++.h>

using namespace std;

int r, c, min_yy, max_yy, min_xx, max_xx;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  // 상 하 좌 우 
  cin >> r >> c;
  char m[10][10];
  memset(m, '.', sizeof(m));

  const int dy[4] = {-1, 0, 1, 0};
  const int dx[4] = {0, 1, 0, -1};


  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      cin >> m[i][j];
    }
  }

  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      if (m[i][j] == 'X') {
        int tmp = 0;
        for (int a = 0; a < 4; a++) {
          int ny = i + dy[a];
          int nx = j + dx[a];
          if (ny < 0 || ny >= r || nx < 0 || nx >= c || m[ny][nx] == '.') {
            tmp++;
          }
        }
        // cout << "(i, j) : " << i << " , " << j << " " <<  m[i][j] << " 주변은 " << tmp << "개 \n";
        if (tmp >= 3)
        {
          m[i][j] = 'k';
        }
      }
    }
  }

  min_yy = min_xx = 100;
  max_yy = max_xx = -100;
  
  for (int i = 0; i < r; i++)
  {
    vector<pair<int, int>> v;
    for (int j = 0; j < c; j++) {
      if (m[i][j] == 'k')
        m[i][j] = '.';
      if (m[i][j] == 'X')
      {
        v.push_back({i, j});
      }
    }
    if (!v.empty()) {
      min_xx = min(v[0].second, min_xx);
      max_xx = max(v[v.size() - 1].second, max_xx);
      min_yy = min(v[0].first, min_yy);
      max_yy = max(v[0].first, max_yy);
    }
  }

  for (int i = min_yy; i <= max_yy; i++) {
    for (int j = min_xx; j <= max_xx; j++) {
      cout << m[i][j];
    }
    cout << "\n";
  }

    return 0;
}