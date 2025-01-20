#include<bits/stdc++.h>
using namespace std;
int t;
string s;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cin >> t;
  for (int j = 0; j < t; j++) {
    cin >> s;
    vector<char> v;
    for (char i : s) {
      if (i == '(') {
        v.push_back(i);
      }
      else if (i==')') {
        if (v.size()) {
          v.pop_back();
        } else {
          v.push_back(i);
          break;
        }
      }
    }
    if (v.size()!=0)
      cout << "NO\n";
    else cout << "YES\n";
  }
  return 0;
}