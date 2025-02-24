#include<bits/stdc++.h>
using namespace std;
int m, n, s;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cin >> m >> n;
  vector<int> v;
  for (int i = m; i < n + 1; i++) {
    if (i == 1) continue;
    int flag = 1;
    for (int j = 2; j*j <= i; j++) {
      if (i%j == 0) {
        flag = 0;
        break;
      }
    }
    if (flag) 
      v.push_back(i);
  }
  if (v.empty()) { 
    cout << -1 << "\n";
    return 0;
  }

  for (int i: v)
    s += i;
  cout << s << "\n" << v[0] << "\n";

  return 0;
}