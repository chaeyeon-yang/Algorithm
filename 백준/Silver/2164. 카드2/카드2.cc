#include <queue>
#include <iostream>

using namespace std;

typedef long long ll;

ll n;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cin >> n;
  queue<ll> q;
  for (ll i = 1; i <= n; i++) {
    q.push(i);
  }
  while(q.size()!=1) {
    q.pop();
    ll tmp = q.front();
    q.pop();
    q.push(tmp);
  }
  cout << q.front() << endl;

  return 0;
}