#include <string>
#include <vector>

using namespace std;

// 약수 개수 구하기
int yaksu(int num) {
    int cnt = 0;
    for(int i=1; i<=num; i++) {
        if (num%i == 0) {
            cnt++;
        }
    }
    return cnt;
}

int solution(int number, int limit, int power) {
    int answer = 0;
    // 1 2 3 4 5
    // 약수 개수 1 1 1 1 1
    // 제한 3
    // 약수 개수가 제한보다 크면 POWER
    for(int i=1; i<=number; i++) {
        int cnt = yaksu(i);
        if (cnt > limit) {
            answer += power;
        } else {
            answer += cnt;
        }
    }
    
    return answer;
}