#include<bits/stdc++.h>
using namespace std;

int t, n, res;
int main()
{
  cin >> t;
  for (int i = 0; i < t; i++) {
    cin >> n;
    map<string, int> mp;
    res = 1;
    for (int j = 0; j < n; j++)
    {
      string c, ctype;
      cin >> c >> ctype;
      mp[ctype]++;
    }
    
    for (auto i : mp)
    {
      res *= i.second+1;
    }
    cout << (res - 1) << "\n";
    }
}