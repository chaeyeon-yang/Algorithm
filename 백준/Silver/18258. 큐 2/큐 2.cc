#include <string>
#include <queue>
#include <iostream>
#include <sstream>

using namespace std;

typedef long long ll;
ll n, s2;
string s1;
int main()
{

  ios::sync_with_stdio(false);
  cin.tie(NULL);
  queue<ll> q;
  
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> s1;
    if (s1 == "push") {
      cin >> s2;
      q.push(s2);
    }
    else if (s1 == "pop") {
      if (!q.size())
        cout << -1 << "\n";
      else {
        cout << q.front() << "\n";
        q.pop();
      }
    } else if (s1 == "size") {
      cout << q.size() << "\n";
    } else if (s1 == "front") {
      if (!q.size())
        cout << -1 << "\n";
      else
        cout << q.front() << "\n";
    } else if (s1 == "back") {
      if (!q.size())
        cout << -1 << "\n";
      else
        cout << q.back() << "\n";
    } else if (s1 == "empty") {
      if (!q.size())
        cout << 1 << "\n";
        else
          cout << 0 << "\n";
    }
  }
}