#include<bits/stdc++.h>

using namespace std;

int n;
long long ans, total;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
    total += v[i];
  }

  for (int i = 0; i < n; i++) {
    total -= v[i];
    ans += v[i] * total;
  }
  cout << ans;
  return 0;
}