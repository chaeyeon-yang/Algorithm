#include<bits/stdc++.h>
using namespace std;
int n, m, a, res;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cin >> n >> m;
  vector<int> v;
  for (int i = 0; i < n; i++) {
    cin >> a;
    v.push_back(a);
  }
  for (int i = 0; i < n; i++) {
    for (int j = i+1; j < n; j++) {
      for (int k = j+1; k < n; k++) {
        if (v[i] + v[j] + v[k] <= m) {
          res = max(res, v[i] + v[j] + v[k]);
        }
      }
    }
  }
  cout << res << "\n";
}