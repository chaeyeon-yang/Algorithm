#include<bits/stdc++.h>
using namespace std;
int n, k, res;
vector<int> v;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cin >> n >> k;
  v.resize(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }

  int tmp = k;
  for (int i = n - 1; i >= 0; i--) {
    if (tmp/v[i] == 0) continue;
    res += tmp/v[i];
    tmp = tmp%v[i];
  }
  cout << res << "\n";
  return 0;
}