#include <cmath>

using namespace std;

long long solution(int r1, int r2) {
    long long answer = 0;
    typedef long long ll;

    // 1사분면 기준으로만 계산, 나중에 * 4 해줌
    for (int x = 1; x <= r2; x++) {
        ll maxY = (ll)floor(sqrt((ll)r2 * r2 - (ll)x * x));
        ll minY = 0;

        if (x < r1) {
            minY = (ll)ceil(sqrt((ll)r1 * r1 - (ll)x * x));
        }
        answer += (maxY - minY + 1);
    }

    return answer * 4;
}
