#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n;
ll res;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cin >> n;
  res = sqrt(n);
  if (res * res < n)
    ++res;
  
  cout << res << "\n";
  return 0;
}