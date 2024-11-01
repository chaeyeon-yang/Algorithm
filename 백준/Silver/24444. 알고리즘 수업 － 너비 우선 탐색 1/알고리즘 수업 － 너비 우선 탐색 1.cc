#include<bits/stdc++.h>
using namespace std;
int n, m, r, a, b, cnt=1;
// 인접리스트로 풀이. 무방향. 오름차순으로 방문
vector<int> adj[100002];
int visited[100002];

void bfs(int r) {
  queue<int> q;
  visited[r] = cnt;
  q.push(r);
  while(q.size()) {
    int here = q.front();
    q.pop();
    for (int there: adj[here]) {
      if(visited[there]) continue;
      cnt++;
      visited[there] = cnt;
      q.push(there);
    }
  }
}
int main()
{
  cin >> n >> m >> r;
  for (int i = 0; i < m; i++) {
    cin >> a >> b;
    adj[a].push_back(b);
    adj[b].push_back(a);
  }
  for (int i = 1; i <= n; i++) {
    sort(adj[i].begin(), adj[i].end());
  }
  bfs(r);
  for (int i = 1; i <= n; i++) {
    cout << visited[i] << "\n";
  }
}