#include<bits/stdc++.h>
using namespace std;
int n;
vector<int> v;
int res;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cin >> n;
  v.resize(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  sort(v.begin(), v.end());
  int tmp = 0;
  for (int i = 0; i < n; i++) {
    if (i>0)
      tmp = v[i-1];
    v[i] = tmp + v[i];
    res += v[i];
  }
  cout << res << "\n";

  return 0;
}