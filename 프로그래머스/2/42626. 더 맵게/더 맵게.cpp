#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(vector<int> scoville, int K) {
    int answer = 0;
    int cnt = 0;
    priority_queue<long long, vector<long long>, greater<long long>> pq;
    for(int i: scoville) {
        pq.push(i);
    }
    
    while(pq.size() >= 2 && pq.top() < K) {
        long long a = pq.top(); pq.pop();
        long long b = pq.top(); pq.pop();
        pq.push(a + b * 2);
        cnt++;
    }
    return pq.top() >= K ? cnt : -1;
}