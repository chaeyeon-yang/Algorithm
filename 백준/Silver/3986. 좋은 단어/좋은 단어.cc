#include<iostream>
#include<stack>
using namespace std;

int n, cnt;
string s;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cin >> n;
  for (int i = 0; i < n; i++) {
    stack<char> st;
    cin >> s;
    for (char c: s) {
      if (c == 'A') {
        if (!st.empty() && st.top() == 'A') {
          st.pop();
        } else
        st.push(c);
      }
      if (c == 'B') {
        if (!st.empty() && st.top() == 'B') {
          st.pop();
        } else
        st.push(c);
      }
    }
    if (st.empty())
      cnt++;
  }
  cout << cnt << endl;
  return 0;
}