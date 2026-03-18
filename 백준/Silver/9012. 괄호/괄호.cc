#include <string>
#include <stack>
#include <iostream>

using namespace std;

string s, res;
int t;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cin >> t;
  for (int i = 0; i < t; i++) {
    cin >> s;
    stack<char> st;
    for (char c : s)
    {
      if (c == '(') {
        st.push(c);
      } else if (c==')') {
        if (st.empty()) {
          st.push(c);
          break;
        }
        st.pop();
      }
    }
    if (!st.empty())
      cout << "NO\n";
    else
      cout << "YES\n";
  }
}