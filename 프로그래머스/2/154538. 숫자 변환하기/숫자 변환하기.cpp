#include <string>
#include <vector>

using namespace std;


int solution(int x, int y, int n) {
    const int INF = 1e9;
    vector<int> dp(y + 1, INF);   // dp[i]: x → i 최소 연산 횟수
    dp[x] = 0;

    for (int i = x; i <= y; i++) {
        if (dp[i] == INF) continue;          // 만들 수 없는 수는 건너뜀
        if (i + n <= y) dp[i + n] = min(dp[i + n], dp[i] + 1);
        if (i * 2 <= y) dp[i * 2] = min(dp[i * 2], dp[i] + 1);
        if (i * 3 <= y) dp[i * 3] = min(dp[i * 3], dp[i] + 1);
    }

    return dp[y] == INF ? -1 : dp[y];
}