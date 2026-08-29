#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    // 약수는 n보다 작거나 같은 수 중 나눴을 때 나머지가 0인 숫자
    for(int i=1; i<=n; i++) {
        if (n%i == 0) answer += i;
    }
    return answer;
}