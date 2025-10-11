#include <string>
#include <vector>
#include <queue>
#include <iostream>

using namespace std;

int solution(vector<int> scoville, int K) {
    int answer = 0;
    priority_queue<int, vector<int>, greater<int>> pq;

    for(int i: scoville) {
        pq.push(i);
    }

    while (pq.size() > 1) {
        int first = pq.top(); pq.pop();
        if (first >= K) return answer; 

        int second = pq.top(); pq.pop();

        int newScoville = first + second * 2;
        pq.push(newScoville);
        answer++;
    }

    return (pq.top() >= K) ? answer : -1;
}