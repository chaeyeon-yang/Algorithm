#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

int solution(string name) {
    int answer = 0;
    int len = name.length();
    
    // 1. 위아래 조작 횟수 계산
    for (int i = 0; i < len; ++i) {
        answer += min(name[i] - 'A', 'Z' - name[i] + 1);
    }

    // 2. 좌우 이동 최소 횟수 계산
    int move = len - 1; // 최대 이동 (그냥 끝까지 가는 경우)

    for (int i = 0; i < len; ++i) {
        int next = i + 1;
        while (next < len && name[next] == 'A') {
            next++;
        }
        // i까지 갔다가 뒤로 돌아가는 경우 고려
        move = min(move, i + len - next + min(i, len - next));
    }

    answer += move;
    return answer;
}
