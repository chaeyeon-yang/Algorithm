#include <string>
#include <vector>
#include <queue>
#include <cstring>
using namespace std;

int dy[4] = {-1,0,1,0};
int dx[4] = {0,1,0,-1};

int N, M;
bool visited[51][51];

// (sy, sx)에 있는 컨테이너가 외부와 연결되어 있는지 확인
bool reachableToOutside(int sy, int sx, vector<string>& storage) {
    // sy,sx 위치에는 target 컨테이너가 있고,
    // 그 주변의 빈 칸들을 통해 바깥(테두리)에 도달 가능한지 확인
    memset(visited, false, sizeof(visited));
    queue<pair<int,int>> q;

    // 컨테이너 주변의 빈칸들을 시작점으로 BFS
    for (int d = 0; d < 4; d++) {
        int ny = sy + dy[d];
        int nx = sx + dx[d];
        if (ny < 0 || nx < 0 || ny >= N || nx >= M) continue;
        if (storage[ny][nx] == '.' && !visited[ny][nx]) {
            visited[ny][nx] = true;
            q.push({ny, nx});
        }
    }

    while (!q.empty()) {
        auto [y, x] = q.front(); q.pop();

        // 이 빈 칸이 테두리에 닿아 있으면 => 외부와 연결
        if (y == 0 || x == 0 || y == N-1 || x == M-1) {
            return true;
        }

        for (int d = 0; d < 4; d++) {
            int ny = y + dy[d];
            int nx = x + dx[d];
            if (ny < 0 || nx < 0 || ny >= N || nx >= M) continue;
            if (visited[ny][nx]) continue;

            // 빈 칸(이미 꺼낸 자리)만 타고 이동 가능
            if (storage[ny][nx] == '.') {
                visited[ny][nx] = true;
                q.push({ny, nx});
            }
        }
    }

    return false; // 바깥으로 못 나감
}

// 지게차: 외부와 연결된 target 컨테이너만 제거
void useForklift(char target, vector<string>& storage) {
    vector<pair<int,int>> toRemove;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (storage[i][j] != target) continue;

            // 바로 테두리에 붙어 있다면 이미 외부와 한 면이 연결
            if (i == 0 || j == 0 || i == N-1 || j == M-1) {
                toRemove.push_back({i, j});
            } else {
                // 내부에 있는 경우: 주변 빈 칸들 통해 바깥까지 갈 수 있는지 BFS
                if (reachableToOutside(i, j, storage)) {
                    toRemove.push_back({i, j});
                }
            }
        }
    }

    // 한 번에 제거 (중간에 바로 지우면 판정이 꼬임)
    for (auto [y, x] : toRemove) {
        storage[y][x] = '.';
    }
}

// 크레인: 해당 종류 컨테이너 전체 제거
void useCrane(char target, vector<string>& storage) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (storage[i][j] == target) {
                storage[i][j] = '.';
            }
        }
    }
}

int solution(vector<string> storage, vector<string> requests) {
    N = storage.size();
    M = storage[0].size();

    for (string req : requests) {
        char item = req[0];

        if (req.size() == 1) {
            // 지게차
            useForklift(item, storage);
        } else {
            // 크레인
            useCrane(item, storage);
        }
    }

    int cnt = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (storage[i][j] != '.') cnt++;
        }
    }
    return cnt;
}
