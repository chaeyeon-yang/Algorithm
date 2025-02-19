#include<bits/stdc++.h>
using namespace std;
int n, res;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }

  sort(v.rbegin(), v.rend()); 

  for (int i = 0; i < n; i++) {
    if ((i + 1) % 3 != 0) { 
      res += v[i];
    }
  }

  cout << res << "\n";
  return 0;
}