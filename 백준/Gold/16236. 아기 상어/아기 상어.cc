#include <bits/stdc++.h>
using namespace std;

int n;
int grid[22][22];
int dx[4] = {0, -1, 1, 0}; // up, left, right, down
int dy[4] = {-1, 0, 0, 1};
int bx, by; // shark x (col), y (row)
int result = 0;
int ateCount = 0;
int sharkSize = 2;

bool findAndEat() {
    vector<vector<bool>> vis(n, vector<bool>(n, false));
    queue<tuple<int,int,int>> q; // x, y, dist
    q.emplace(bx, by, 0);
    vis[by][bx] = true;

    int minDist = -1;
    vector<pair<int,int>> candidates; // store (row, col) of edible fish at minDist

    while(!q.empty()) {
        auto [x,y,d] = q.front(); q.pop();

        // 만약 이미 최소거리(minDist)를 찾았고, 현재 d가 그보다 크면 더 이상 탐색할 필요 없음
        if (minDist != -1 && d > minDist) break;

        // 현재 칸이 먹을 수 있는 물고기인지 검사
        if (grid[y][x] > 0 && grid[y][x] < sharkSize) {
            if (minDist == -1) minDist = d; // 첫 발견이면 최소거리 설정
            candidates.emplace_back(y, x);   // 후보로 추가 (정렬을 위해 row,col 순)
            // 여기서 continue 하는 이유: 이 칸에서 더 주변을 퍼트릴 필요 X (이미 물고기라서)
            continue;
        }

        // 4방 탐색 (지나갈 수 있는 칸만 큐에 넣음)
        for (int i = 0; i < 4; ++i) {
            int nx = x + dx[i], ny = y + dy[i];
            if (nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
            if (vis[ny][nx]) continue;
            if (grid[ny][nx] <= sharkSize) { // 지나갈 수 있거나 먹을 수 있음
                vis[ny][nx] = true;
                q.emplace(nx, ny, d + 1);
            }
        }
    }

    if (candidates.empty()) return false; // 먹을 물고기 없음

    // 우선순위: row(작은 것) -> col(작은 것)
    sort(candidates.begin(), candidates.end());
    by = candidates[0].first;
    bx = candidates[0].second;

    // 시간 누적 (minDist는 0부터 시작하므로 이동칸 = minDist)
    result += minDist;

    // 물고기 먹기
    grid[by][bx] = 0;
    ateCount++;
    if (ateCount == sharkSize) {
        sharkSize++;
        ateCount = 0;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> grid[i][j];
            if (grid[i][j] == 9) {
                by = i;
                bx = j;
                grid[i][j] = 0;
            }
        }
    }

    while (true) {
        bool ate = findAndEat();
        if (!ate) break;
    }

    cout << result << '\n';
    return 0;
}
