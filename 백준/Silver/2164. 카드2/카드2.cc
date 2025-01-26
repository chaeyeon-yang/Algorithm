#include<bits/stdc++.h>
using namespace std;
int n, t;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cin >> n;
  queue<int> q;
  for (int i = 1; i <=n; i++) {
    q.push(i);
  }
  while(q.size() > 1) {
    q.pop();
    int t = q.front();
    q.pop();
    q.push(t);
  }
  cout << q.front() << "\n";
  return 0;
}