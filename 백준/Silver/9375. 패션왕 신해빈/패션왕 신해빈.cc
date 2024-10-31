#include<bits/stdc++.h>
using namespace std;

int t, n;
string a,b;

int main()
{
  cin >> t;
  for (int i = 0; i < t; i++) {
    cin >> n;
    map<string, int> mp;
    int res = 1;
    for (int i = 0; i < n; i++) {
      cin >> a >> b;
      mp[b]++;
    }
    for (auto ke : mp)
    {
      res *= (ke.second + 1);
    }
    cout << res - 1 << "\n";
  }
  return 0;
}