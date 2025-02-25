#include<bits/stdc++.h>
using namespace std;
int n, l, r, cnt;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cin >> n;
  int tmp = n;
  while (true) {
    if (cnt && tmp == n)
      break;
    l = tmp / 10;
    r = tmp % 10;
    tmp = 10 * r + (l + r) % 10;
    cnt++;
  }
  cout << cnt << "\n";
  return 0;
}