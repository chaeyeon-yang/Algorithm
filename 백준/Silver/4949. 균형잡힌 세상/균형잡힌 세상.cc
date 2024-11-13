#include<bits/stdc++.h>
using namespace std;

string s;
int main() {
  while (true) {
    getline(cin, s);
    stack<char> st;

    if (s == ".")
      break;
    for (char a: s) {
      if (a == '(' || a == '[')
        st.push(a);
      if (a == ']') {
        if (st.size() && st.top() == '[') {
          st.pop();
        }
        else
        {
          st.push(']');
          break;
        }
      }
      if (a == ')') {
        if (st.size() && st.top() == '(') {
          st.pop();
        }
        else
        {
          st.push(')');
          break;
        }
      }
    }
    if (st.size())
      cout << "no\n";
    else
      cout << "yes\n";
  }
}