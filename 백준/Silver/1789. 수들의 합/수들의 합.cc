#include<bits/stdc++.h>
using namespace std;
long long s, su, res;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cin >> s;
  for (int i = 1; i < s+1; i++) {
    su += i;
    res = i;
    if (su > s) {
      res -= 1;
      break;
    }
  }
  cout << res << "\n";

  return 0;
}