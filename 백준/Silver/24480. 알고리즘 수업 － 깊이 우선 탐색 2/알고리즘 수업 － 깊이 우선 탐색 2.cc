#include <bits/stdc++.h>
using namespace std;

int n, m, r, a, b;
int cnt = 1;
vector<int> adj[100002];
int visited[100002];

void dfs(int r) {
    visited[r] = cnt;
    // cout << "정점 " << r << "를 탐색\n";
    // cout << r << "\n";
    for (int nxt: adj[r]) {
        if (visited[nxt]) continue;
        // cout << "정점 " << r << "에서 " << nxt << "를 방문!\n";
        cnt++;
        dfs(nxt);
    }
}

int main() {
    cin >> n >> m >> r;
    for (int i = 0; i < m; i++) {
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    for (int i = 1; i <= n; i++) {
        sort(adj[i].rbegin(), adj[i].rend());
    }

    dfs(r);

    for (int i = 1; i <= n; i++)   {
        cout << visited[i] << "\n";
    }

    return 0;
}