#include<bits/stdc++.h>
using namespace std;

int n, m, a, b, cnt, res;
vector<int> adj[102];
int visited[102];

int dfs(int r) {
  visited[r] = 1;
  for (int nxt : adj[r])
  {
    if (visited[nxt] || nxt == 1) continue;
    else {
      visited[nxt] = cnt;
      cnt++;
      dfs(nxt);
    }
  }
  return cnt;
}
int main() {
  cin >> n >> m;
  for (int i = 0; i < m; i++) {
    cin >> a >> b;
    adj[a].push_back(b);
    adj[b].push_back(a);
  }
  res = dfs(1);
  cout << res << "\n";
}