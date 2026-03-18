#include <iostream>
#include <stack>
#include <string>

using namespace std;

typedef long long ll;
ll n, s2;
string s1;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  stack<ll> st;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> s1;
    if (s1 == "push") {
      cin >> s2;
      st.push(s2);
    } else if (s1 == "top") {
      if (st.empty())
        cout << -1 << "\n";
      else
        cout << st.top() << "\n";
    } else if (s1 == "pop") {
      if (st.empty())
        cout << -1 << "\n";
      else {
        cout << st.top() << "\n";
        st.pop();
      }  
    } else if (s1 == "size") {
      cout << st.size() << "\n";
    } else if (s1 == "empty") {
      if (st.empty())
        cout << "1\n";
      else
        cout << "0\n";
    }
  }
}