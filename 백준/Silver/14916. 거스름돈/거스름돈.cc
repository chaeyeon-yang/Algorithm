#include<bits/stdc++.h>
using namespace std;
int n, res, change;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cin >> n;
  res = n / 5;
  change = n % 5;
  if (n<5) {
    if (n%2==0)
      cout << n / 2;
    else
      cout << -1;
  } else if (change%2!=0) {
    change += 5;
    res--;
    res += change / 2;
    cout << res;
  } else {
    res += change / 2;
    cout << res;
  }
}