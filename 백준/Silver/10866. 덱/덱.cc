#include<bits/stdc++.h>
using namespace std;
int n,a;
string s;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cin >> n;
  deque<int> dq;
  for (int i = 0; i < n; i++) {
    cin >> s;
    if (s=="push_back") {
      cin >> a;
      dq.push_back(a);
    }
    else if (s=="push_front") {
      cin >> a;
      dq.push_front(a);
    }
    else if (s=="pop_front"){
      if (dq.empty())
        cout << "-1\n";
      else {
        int tmp = dq.front();
        cout << tmp << "\n";
        dq.pop_front();
      }
    }
    else if (s=="pop_back"){
      if (dq.empty())
        cout << "-1\n";
      else {
        int tmp = dq.back();
        cout << tmp << "\n";
        dq.pop_back();
      }
    }
    else if (s=="size") {
      cout << dq.size() << "\n";
    }
    else if (s=="empty") {
      if (dq.empty())
        cout << "1\n";
      else
        cout << "0\n";
    }
    else if (s=="front") {
      if (dq.empty()) {
        cout << "-1\n";
      } else
        cout << dq.front() << "\n";
    }
    else {
      if (dq.empty()) {
        cout << "-1\n";
      } else
        cout << dq.back() << "\n";
    }
  }
}