#include <vector>
#include <queue>

using namespace std;

int solution(vector<int> scoville, int K) {
    int answer = 0;
    priority_queue<int, vector<int>, greater<int>> pq;
    
    for (int s : scoville) {
        pq.push(s);
    }

    while (pq.size() >= 2 && pq.top() < K) {
        int first = pq.top(); pq.pop();
        int second = pq.top(); pq.pop();
        int mixed = first + second * 2;
        pq.push(mixed);
        answer++;
    }

    if (!pq.empty() && pq.top() < K) return -1;
    return answer;
}
