#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int solution(int n, int m, vector<int> section) {
    int answer = 0;
    int painted_end = 0; // 여기까지는 이미 칠해진 상태 (0이면 아무것도 안 칠함)

    for (int i = 0; i < section.size(); i++) {
        int point = section[i];
        if (point <= painted_end) continue; // 이미 칠해진 지점이면 스킵

        // point를 포함하면서 가능한 한 오른쪽으로 민 시작점
        int start = min(point, n - m + 1);
        painted_end = start + m - 1;
        answer++;
    }
    return answer;
}