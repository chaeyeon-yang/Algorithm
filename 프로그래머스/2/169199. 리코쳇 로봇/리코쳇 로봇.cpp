#include <string>
#include <vector>
#include <queue>

using namespace std;

int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, 1, 0, -1};

int solution(vector<string> board) {
    int n = board.size();
    int m = board[0].size();

    queue<pair<int,int>> q;
    vector<vector<int>> visited(n, vector<int>(m, -1));

    int sy, sx;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (board[i][j] == 'R') {
                sy = i;
                sx = j;
            }
        }
    }

    q.push({sy, sx});
    visited[sy][sx] = 0;

    while (!q.empty()) {
        auto [y, x] = q.front();
        q.pop();

        if (board[y][x] == 'G')
            return visited[y][x];

        for (int d = 0; d < 4; d++) {
            int ny = y;
            int nx = x;

            while (true) {
                int ty = ny + dy[d];
                int tx = nx + dx[d];

                if (ty < 0 || ty >= n || tx < 0 || tx >= m)
                    break;
                if (board[ty][tx] == 'D')
                    break;

                ny = ty;
                nx = tx;
            }

            if (visited[ny][nx] != -1)
                continue;

            visited[ny][nx] = visited[y][x] + 1;
            q.push({ny, nx});
        }
    }

    return -1;
}
