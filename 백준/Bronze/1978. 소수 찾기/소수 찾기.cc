#include<bits/stdc++.h>
using namespace std;
int n, a, cnt;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a;
    if (a==1) continue;
    int flag = 1;
    for (int j = 2; j< a; j++) {
      if (a%j == 0) {
        flag = 0;
        break;
      }
    }
    if (flag) {
      cnt++;
    }
  }
  cout << cnt << "\n";
  return 0;
}