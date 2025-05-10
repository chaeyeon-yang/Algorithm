#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> lines) {
    int answer = 0;
    int offset = 100;
    int cnt[201] = {0}; // -100 ~ 100을 0 ~ 200에 대응

    for (int i = 0; i < lines.size(); i++) {
        int start = lines[i][0] + offset;
        int end = lines[i][1] + offset;

        for (int j = start; j < end; j++) {
            cnt[j]++;
        }
    }

    for (int i = 0; i < 201; i++) {
        if (cnt[i] >= 2) answer++;
    }

    return answer;
}
