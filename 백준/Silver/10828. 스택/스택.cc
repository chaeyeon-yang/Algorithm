#include<bits/stdc++.h>
using namespace std;
int n, a;
string s;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cin >> n;
  stack<int> st;
  for (int i = 0; i < n; i++) {
    cin >> s;
    if (s == "push") {
      cin >> a;
      st.push(a);
    }
    else if (s=="pop") {
      if (st.empty())
        cout << "-1\n";
      else {
        cout << st.top() << "\n";
        st.pop();
      }
    }
    else if (s=="size") {
      cout << st.size() << "\n";
    }
    else if (s=="empty") {
      if (st.empty())
        cout << "1\n";
      else
        cout << "0\n";
    }
    else {
      if (st.empty())
        cout << "-1\n";
      else
        cout << st.top() << "\n";
    } 
  }
  return 0;
}