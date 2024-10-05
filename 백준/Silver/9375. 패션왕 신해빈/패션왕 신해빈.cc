#include<bits/stdc++.h>
using namespace std;
int test, n;
string s, stype;
int main() {
  cin >> test;
  while(test--) {
    map<string, int> _mp;
    cin >> n;
    for (int i = 0; i < n; i++) {
      cin >> s >> stype;
      _mp[stype]++;
    }
    long long res = 1;
    for (auto c: _mp) 
    {
      res *= ((long long)c.second + 1);
    }
    res--;
    cout << res << "\n";
  }
}