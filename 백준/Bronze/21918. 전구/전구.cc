#include<bits/stdc++.h>
using namespace std;
int n, m, a, b, c, k;
int s[4000];
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cin >> n >> m;
  for (int i = 0; i < n; i++) {
    cin >> s[i];
  }

  for (int i = 0; i < m; i++) {
    cin >> a >> b >> c;
    if (a==1) {
      s[b-1] = c;
    } if (a==2) {
      for (int j = b; j <= c; j++) {
        s[j - 1] = !s[j - 1];
      }
    }
    if (a == 3){
      for (int j = b; j <= c; j++) {
        s[j-1] = 0;
      }
    }
    if (a==4) {
      for (int j = b; j <= c; j++) {
        s[j-1] = 1;
      }
    }
  }
  for (int i = 0; i < n; i++) {
    cout << s[i] << " ";
  }
  
  return 0;
}