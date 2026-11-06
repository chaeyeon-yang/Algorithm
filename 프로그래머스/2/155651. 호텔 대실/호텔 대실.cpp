#include <string>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int toMin(const string& t) {
    return stoi(t.substr(0, 2)) * 60 + stoi(t.substr(3, 2));
}

int solution(vector<vector<string>> book_time) {
    // 1. 입실 시간 순 정렬 ("HH:MM" 형식이라 문자열 정렬로 충분)
    sort(book_time.begin(), book_time.end());

    // 2. 최소 힙: 각 방이 다시 사용 가능해지는 시각
    priority_queue<int, vector<int>, greater<int>> pq;

    for (auto& b : book_time) {
        int start = toMin(b[0]);
        int end   = toMin(b[1]) + 10;   // 청소 시간 포함

        // 가장 빨리 비는 방이 이미 비었으면 재사용
        if (!pq.empty() && pq.top() <= start) {
            pq.pop();
        }
        pq.push(end);   // 재사용이든 새 방이든 새 퇴실 시각을 넣음
    }

    return pq.size();   // 큐에 남은 원소 수 = 사용한 방 수
}