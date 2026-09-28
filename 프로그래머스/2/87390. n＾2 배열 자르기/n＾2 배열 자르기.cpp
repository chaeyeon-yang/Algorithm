#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int n, long long left, long long right) {
    vector<int> answer;
    for (long long k = left; k <= right; k++) {
        long long i = k / n; // 행
        long long j = k % n; // 열
        answer.push_back(max(i, j) + 1);
    }
    return answer;
}