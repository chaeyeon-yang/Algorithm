#include<bits/stdc++.h>
using namespace std;
int n, a;
string s;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cin >> n;
  queue<int> q;
  for (int i = 0; i < n; i++) {
    cin >> s;
    if (s=="push") {
      cin >> a;
      q.push(a);
    }
    else if (s=="front") {
      if (q.empty())
        cout << "-1\n";
      else
        cout << q.front() << "\n";
    }
    else if (s=="back") {
      if (q.empty())
        cout << "-1\n";
      else
        cout << q.back() << "\n";
    }
    else if (s=="empty") {
      if (q.empty()) cout << "1\n";
      else cout << "0\n";
    }
    else if (s=="size") {
      cout << q.size() << "\n";
    }
    else if (s=="pop") {
      if (q.empty()) cout << "-1\n";
      else {
        cout << q.front() << "\n";
        q.pop();
      }
    }
  }
  return 0;
}