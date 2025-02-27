#include <bits/stdc++.h>
using namespace std;
int n, s;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  cin >> n;
  string num;
  cin >> num;

  for (char c : num) {
    s += c - '0';
  }

  cout << s << "\n";
  return 0;
}
