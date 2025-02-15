#include<bits/stdc++.h>
using namespace std;
string s, res;
int cnt;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cin >> s;
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == 'X')
      cnt++;
    if (s[i] == '.') {
      res += s[i];
      if (cnt%2 != 0)
        break;
      else
        cnt = 0;
    }
    if (cnt==2 && s[i+1]!='X') {
      res += "BB";
      cnt = 0;
    }
    if (cnt == 4) {
      res += "AAAA";
      cnt = 0;
    }
  }
  if (cnt%2 ==1)
    cout << -1;
  else
    cout << res;
  return 0;
}