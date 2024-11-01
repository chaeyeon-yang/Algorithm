#include<bits/stdc++.h>
using namespace std;

int n, m, v, a, b;
vector<int> adj[1002];
int visited1[1002];
int visited2[1002];

// 정점 오름차순, 정점 1-N, 인접리스트, 양방향
void dfs(int v) {
  visited1[v] = 1;
  cout << v << " ";
  for (int nxt: adj[v]) {
    if (visited1[nxt]) continue;
    dfs(nxt);
  }
}

void bfs(int v) {
  queue<int> q;
  visited2[v] = 1;
  cout << v << " ";
  q.push(v);
  while(q.size()) {
    int here = q.front();
    q.pop();
    for (int there: adj[here]) {
      if (visited2[there]) continue;
      visited2[there] = 1;
      cout << there << " ";
      q.push(there);
    }
  }
}

int main() {
  cin >> n >> m >> v;
  for (int i = 0; i < m; i++) {
    cin >> a >> b;
    adj[a].push_back(b);
    adj[b].push_back(a);
  }
  for (int i = 1; i <= n; i++) {
    sort(adj[i].begin(), adj[i].end());
  }

  dfs(v);
  cout << "\n";
  bfs(v);
  return 0;
}
