#include<iostream>
#include<map>
using namespace std;
int n, m, cnt;
string s;
map<string, int> dict;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cin >> n >> m;
  for (int i = 0; i < n; i++) {
    cin >> s;
    dict[s]++;
  }
  for (int i = 0; i < m; i++) {
    cin >> s;
    if (dict[s]>=1)
      cnt++;
  }
  cout << cnt << endl;

  return 0;
}