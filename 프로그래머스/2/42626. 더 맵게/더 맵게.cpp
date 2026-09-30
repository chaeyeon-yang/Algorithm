#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(vector<int> scoville, int K) {
    int answer = 0;
    priority_queue<int, vector<int>, greater<int>> q;
    for(int i: scoville) {
        q.push(i);
    }
    
    while(q.size()>1 && q.top() < K) {
        int fi = q.top();
        q.pop();
        int se = q.top();
        q.pop();
        int new_sco = fi + (se*2);
        q.push(new_sco);
        answer++;
    }
    if (q.size() <= 1) {
        if (q.top() < K) {
            return -1;
        }
    }
    
    return answer;
}