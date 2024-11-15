#include <bits/stdc++.h>
using namespace std;
int n, m, cnt;
string s;
map<string, int> mp;
vector<string> v;

int main()
{
  cin >> n >> m;
  for (int i = 0; i < (n+m); i++) {
    cin >> s;
    mp[s]++;
  }
  for (auto a: mp) {
    if (a.second >= 2) {
      v.push_back(a.first);
    }
  }
  cout << v.size() << "\n";
  sort(v.begin(), v.end());
  for (string k : v)
  {
    cout << k << "\n";
  }
  return 0;
}