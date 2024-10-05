#include<bits/stdc++.h>
using namespace std;
string s, res;
int cnt[200], flag;
char mid;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cin >> s;
  for (char a: s)
    cnt[a]++;
  for (int i = 'Z'; i >= 'A'; i--)
  {
    if(cnt[i]) {
      if(cnt[i] &1) {
        mid = char(i);
        flag++;
        cnt[i]--;
      }
      if(flag==2)
        break;
      for (int j = 0; j < cnt[i]; j+=2)
      {
        res = char(i) + res;
        res += char(i);
      }
    }
  }
  if(mid)
    res.insert(res.begin() + res.size()/2, mid);
  if(flag==2)
    cout << "I'm Sorry Hansoo\n";
  else
    cout << res << "\n";
}