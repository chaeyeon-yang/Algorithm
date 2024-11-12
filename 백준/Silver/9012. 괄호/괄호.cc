#include<bits/stdc++.h>
using namespace std;
int n;
string s;
int main()
{
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> s;
    stack<char> st;
    for (char a :s) {
      if (a == '(') st.push(a);
      if (a == ')') {
        if (st.size())
          st.pop();
        else
        {
          st.push(a);
          break;
        }
      }
    }
    if (st.size() == 0) cout << "YES\n";
    else
      cout << "NO\n";
  }
}