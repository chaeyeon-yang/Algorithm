#include<bits/stdc++.h>

using namespace std;

int n, ans;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cin >> n;
  if ((n%4==0 && n%100!=0) || n%400==0)
    ans = 1;

  cout << ans << endl;
  return 0;
}