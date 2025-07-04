#include<bits/stdc++.h>

using namespace std;

int n, m, ans;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  cin >> n >> m;
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }

  int sum = 0;
  for (int i = 0; i < n; i++) {
    if (v[i] + sum <= m) {
      sum += v[i];
    } else {
      ans++;
      sum = v[i];
    }
  }

  if (sum > 0)
    ans++;
  cout << ans << endl;

  return 0;
}