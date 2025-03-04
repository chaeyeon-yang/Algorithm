#include<bits/stdc++.h>
using namespace std;
int n, m, a;
typedef long long ll;
map<ll, int> mp;
vector<int> res;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a;
    mp[a]++;
  }
  cin >> m;
  for (int i = 0; i < m; i++) {
    cin >> a;
    mp[a]++;
    if (mp[a] > 1)
      res.push_back(1);
    else
      res.push_back(0);
  }
  for (int i:res) {
    cout << i << " ";
  }

  return 0;
}