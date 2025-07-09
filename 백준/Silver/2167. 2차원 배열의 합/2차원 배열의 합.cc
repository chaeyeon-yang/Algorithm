#include<bits/stdc++.h>

using namespace std;

int n, m, k, i, j, x, y, ans;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cin >> n >> m;
  vector<vector<int>> v(n, vector<int>(m, 0));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> v[i][j];
    }
  }
  cin >> k;

  for (int t = 0; t < k; t++) {
    cin >> i >> j >> x >> y;
    ans = 0;
    for (int a = i-1; a < x; a++)
    {
      for (int b = j-1; b < y; b++) {
        ans += v[a][b];
      }
    }
    cout << ans << "\n";
  }
  return 0;
}