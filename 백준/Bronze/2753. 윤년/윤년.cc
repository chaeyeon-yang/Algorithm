#include<bits/stdc++.h>
using namespace std;
int n, res;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cin >> n;
  if (n%4 == 0) {
    if (n%100 != 0)
      res = 1;
    if (n%400 == 0)
      res = 1;
  }
  cout << res << "\n";
  return 0;
}