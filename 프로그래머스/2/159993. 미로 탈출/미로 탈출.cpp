#include <string>
#include <vector>
#include <queue>
#include <iostream>

using namespace std;

const int dy[4] = {-1, 0, 1, 0};
const int dx[4] = {0, 1, 0, -1};

int n, m;

int bfs(vector<string>& maps, pair<int,int> start, char target) {
    vector<vector<int>> visited(n, vector<int>(m, 0));
    queue<pair<int,int>> q;
    q.push(start);
    visited[start.first][start.second] = 1;

    while (!q.empty()) {
        auto [y, x] = q.front();
        q.pop();

        if (maps[y][x] == target) return visited[y][x] - 1;

        for (int i = 0; i < 4; i++) {
            int ny = y + dy[i];
            int nx = x + dx[i];
            if (ny < 0 || ny >= n || nx < 0 || nx >= m) continue;
            if (maps[ny][nx] == 'X') continue;
            if (visited[ny][nx]) continue;
            visited[ny][nx] = visited[y][x] + 1;
            q.push({ny, nx});
        }
    }
    return -1; // 못 찾음
}

int solution(vector<string> maps) {
    n = maps.size();
    m = maps[0].size();
    pair<int,int> S, L, E;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (maps[i][j] == 'S') S = {i, j};
            if (maps[i][j] == 'L') L = {i, j};
            if (maps[i][j] == 'E') E = {i, j};
        }
    }

    int dist1 = bfs(maps, S, 'L');
    if (dist1 == -1) return -1;
    int dist2 = bfs(maps, L, 'E');
    if (dist2 == -1) return -1;

    return dist1 + dist2;
}
