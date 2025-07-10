#include <string>
#include <vector>
#include <cmath>

using namespace std;

vector<int> solution(vector<vector<string>> places) {
    vector<int> answer;

    for (auto &place : places) {
        vector<pair<int,int>> people;

        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                if (place[i][j] == 'P') {
                    people.push_back({i, j});
                }
            }
        }

        bool ok = true;

        for (int i = 0; i < people.size(); i++) {
            for (int j = i + 1; j < people.size(); j++) {
                int dist = abs(people[i].first - people[j].first) + abs(people[i].second - people[j].second);

                if (dist == 1) {  // 거리 1이면 무조건 위반
                    ok = false;
                    break;
                } else if (dist == 2) {
                    int x1 = people[i].first;
                    int y1 = people[i].second;
                    int x2 = people[j].first;
                    int y2 = people[j].second;

                    if (x1 == x2) {
                        // 같은 행
                        int midY = (y1 + y2) / 2;
                        if (place[x1][midY] != 'X') ok = false;
                    } else if (y1 == y2) {
                        // 같은 열
                        int midX = (x1 + x2) / 2;
                        if (place[midX][y1] != 'X') ok = false;
                    } else {
                        // 대각선
                        if (place[x1][y2] != 'X' || place[x2][y1] != 'X') ok = false;
                    }
                    if (!ok) break;
                }
            }
            if (!ok) break;
        }

        answer.push_back(ok ? 1 : 0);
    }

    return answer;
}
