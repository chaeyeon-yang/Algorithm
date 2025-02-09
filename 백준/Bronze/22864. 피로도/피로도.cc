#include<bits/stdc++.h>
using namespace std;
int a, b, c, m;
int piro, work;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cin >> a >> b >> c >> m;
  for (int i = 1; i < 25; i++) {
    if (piro + a <= m) {
      piro += a;
      work += b;
    } else {
      piro -= c;
      if (piro < 0)
        piro = 0;
    }
  }
  cout << work << "\n";
}