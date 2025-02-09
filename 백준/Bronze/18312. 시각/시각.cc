#include<bits/stdc++.h>
using namespace std;
int n, k, cnt;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cin >> n >> k;
  for (int a = 0; a < n+1; a++) {
    for (int i = 0; i < 60; i++) {
      for (int j = 0; j < 60; j++) {
        if (a%10 ==k || a/10 ==k || i%10 ==k || i/10 ==k || j%10 ==k || j/10 ==k) {
          cnt++;
        }
      }
    }
  }
  cout << cnt << "\n";
}