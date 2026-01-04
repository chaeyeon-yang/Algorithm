#include <vector>
#include <unordered_map>

using namespace std;

typedef long long ll;

long long solution(vector<int> weights) {
    ll answer = 0;
    unordered_map<ll, ll> cnt;

    for (int w : weights) {
        // 같은 무게 (1:1)
        answer += cnt[w];

        // 2 : 3, 3 : 2
        if (w * 2 % 3 == 0) answer += cnt[w * 2 / 3];
        if (w * 3 % 2 == 0) answer += cnt[w * 3 / 2];

        // 2 : 4, 4 : 2
        if (w * 2 % 4 == 0) answer += cnt[w * 2 / 4];
        if (w * 4 % 2 == 0) answer += cnt[w * 4 / 2];

        // 3 : 4, 4 : 3
        if (w * 3 % 4 == 0) answer += cnt[w * 3 / 4];
        if (w * 4 % 3 == 0) answer += cnt[w * 4 / 3];

        cnt[w]++;
    }

    return answer;
}
