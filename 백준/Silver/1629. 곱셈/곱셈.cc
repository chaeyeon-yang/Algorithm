#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a, b, c, res;
ll go(ll a, ll b) {
  if (b==1)
    return a % c;
  ll res = go(a, b / 2);
  res = (res * res) % c;
  if(b%2)
    res = (res * a) % c;
  return res;
}
int main()
{
  cin >> a >> b >> c;
  cout << go(a,b) << "\n";
}