#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <cctype>

using namespace std;

int n, m;
string s;
map<string, int> mp;
vector<string> v;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  cin >> n >> m;

  v.resize(n + 1); 

  for (int i = 1; i <= n; i++)
  {
    cin >> s;
    mp[s] = i;
    v[i] = s;
  }

  for (int i = 0; i < m; i++) {
    cin >> s;

    if (isdigit(s[0])) {
      int idx = stoi(s);
      cout << v[idx] << "\n";
    } else {
      cout << mp[s] << "\n";
    }
  }

  return 0;
}