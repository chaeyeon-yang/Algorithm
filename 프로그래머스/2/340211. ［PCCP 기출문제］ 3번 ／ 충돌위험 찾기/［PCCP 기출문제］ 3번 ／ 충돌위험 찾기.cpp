#include <string>
#include <vector>
#include <map>

using namespace std;

vector<vector<pair<int,int>>> mv;   // mv[i][t] = i번 로봇이 t초에 있는 위치

// from → to 까지 y 먼저, 그 다음 x 방향으로 한 칸씩 이동 (시작점은 포함 X)
void move(int idx, const pair<int,int>& from, const pair<int,int>& to) {
    int y  = from.first;
    int x  = from.second;
    int ty = to.first;
    int tx = to.second;

    // 1) y 방향 먼저 이동
    while (y != ty) {
        if (y < ty) y++;   // 아래로
        else y--;   // 위로
        mv[idx].push_back({y, x});
    }

    // 2) x 방향 이동
    while (x != tx) {
        if (x < tx) x++;   // 오른쪽
        else x--;   // 왼쪽
        mv[idx].push_back({y, x});
    }
}

int solution(vector<vector<int>> points, vector<vector<int>> routes) {
    int answer = 0;

    // 포인트 번호 → 실제 좌표 (0-based)로 변환
    vector<pair<int,int>> pos(points.size());
    for (int i = 0; i < points.size(); i++) {
        int y = points[i][0] - 1;
        int x = points[i][1] - 1;
        pos[i] = {y, x};
    }

    // 로봇 수만큼 mv 준비
    mv.assign(routes.size(), {});   // resize + clear 역할

    // 각 로봇별 전체 이동 경로 만들기
    for (int i = 0; i < routes.size(); i++) {
        // routes[i] = [p1, p2, p3, ...]
        // p1 -> p2 -> p3 ... 순서로 이동

        // 시작 포인트 (시간 0 위치)
        int firstPointIdx = routes[i][0] - 1;   // 포인트 번호 → 인덱스
        mv[i].push_back(pos[firstPointIdx]);    // t = 0 위치

        // 각 구간 p[j] → p[j+1] 이동
        for (int j = 0; j < routes[i].size() - 1; j++) {
            int fromIdx = routes[i][j] - 1;
            int toIdx   = routes[i][j + 1] - 1;

            move(i, pos[fromIdx], pos[toIdx]);
        }
    }

    // 전체 시간 중 가장 긴 경로 길이 계산
    int maxT = 0;
    for (auto &path : mv) {
        if ((int)path.size() > maxT) maxT = path.size();
    }

    // 시간 t별로, 같은 칸에 2대 이상 있는지 체크
    for (int t = 0; t < maxT; t++) {
        map<pair<int,int>, int> cnt;   // 위치 → 몇 대의 로봇이 있는지

        for (int r = 0; r < mv.size(); r++) {
            if (t < mv[r].size()) {    // 이 로봇이 t초에 아직 이동 중이면
                cnt[mv[r][t]]++;
            }
        }

        for (auto &p : cnt) {
            if (p.second >= 2) answer++;   // 같은 시간에 같은 칸에 2대 이상
        }
    }

    return answer;
}
