#include <string>
#include <vector>

using namespace std;

// 최소공약수 있는지 확인
bool isSosu(int num) {
    if (num == 2) return true;
    for(int i=2; i*i<=num; i++) {
        if (num%i == 0) return false;
    }
    return true;
}

int solution(int n) {
    int answer = 0;
    for(int i=2; i<=n; i++) {
        if (isSosu(i)) answer++;
    }
    return answer;
}