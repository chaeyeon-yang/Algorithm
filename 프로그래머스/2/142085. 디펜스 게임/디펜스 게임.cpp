#include <string>
#include <vector>
#include <queue>
using namespace std;

int solution(int n, int k, vector<int> enemy) {
    priority_queue<int> pq;  // 지금까지 나온 적 저장 (큰 순서로)
    
    for (int i = 0; i < enemy.size(); i++) {
        n -= enemy[i];        // 병사 소모
        pq.push(enemy[i]);    // 이번 라운드 적 기록
        
        // 병사가 부족하면 무적권 사용
        if (n < 0) {
            if (k > 0) {
                n += pq.top(); // 가장 큰 적 무적권 처리
                pq.pop();
                k--;
            } else {
                return i; // 더 이상 진행 불가
            }
        }
    }
    return enemy.size(); // 끝까지 진행 가능
}
