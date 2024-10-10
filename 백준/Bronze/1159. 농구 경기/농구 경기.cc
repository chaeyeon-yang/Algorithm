#include<bits/stdc++.h>
using namespace std;

int n, arr[26];
string s, res;

int main()
{
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> s;
    arr[s[0] - 'a']++;
  }
  for (int i = 0; i < 26; i++)
  {
    if(arr[i] >= 5) {
      res += i+'a';
    }
  }
  if (res.size()) cout << res << "\n";
  else cout << "PREDAJA\n";
}