#include<bits/stdc++.h>
using namespace std;
string s;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  while(true) {
    getline(cin, s);
    if (s==".")
      break;
    stack<char> st;
    for (char i : s) {
      if (i=='[' || i=='(')
        st.push(i);
      if (i==')') {
        if (st.empty() || st.top() != '(') {
          st.push(i);
          break;
        }
        if (st.top() == '(')
          st.pop();
      }
      if (i==']') {
        if (st.empty() || st.top() != '[') {
          st.push(i);
          break;
        }
        if (st.top() == '[')
          st.pop();
      }
    }
    if (st.empty())
      cout << "yes\n";
    else
      cout << "no\n";
  }
  return 0;
}