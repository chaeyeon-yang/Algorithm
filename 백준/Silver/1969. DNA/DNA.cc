#include<bits/stdc++.h>
using namespace std;
int n, m;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cin >> n >> m;
  vector<string> v(n);

  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  string best = "";
  int hd = 0;

  // 각 위치별 문자 개수
  for (int i = 0; i < m; i++) {
    int cnt[4] = {}; // A C G T (알파벳 순)
    for (int j = 0; j < n; j++) {
      if (v[j][i] == 'A')
        cnt[0]++;
      if (v[j][i] == 'C')
        cnt[1]++;
      if (v[j][i]=='G')
        cnt[2]++;
      if (v[j][i]=='T')
        cnt[3]++;
    }

      char bestC = 'A';
      int maxCnt = cnt[0];
      if (cnt[1] > maxCnt) {
        bestC = 'C';
        maxCnt = cnt[1];
      }
      if (cnt[2] > maxCnt) {
        bestC = 'G';
        maxCnt = cnt[2];
      }
      if (cnt[3] > maxCnt) {
        bestC = 'T';
        maxCnt = cnt[3];
      }
      best += bestC;

      for (int k = 0; k < n; k++) {
        if (v[k][i] != bestC) {
          hd++;
        }
      }
    }
  cout << best << "\n" << hd << "\n";

  return 0;
}