#include <string>
#include <vector>
#include <cmath>

using namespace std;

int measure(int num) {
    int cnt = 0;
    for(int i=1; i*i<=num; i++) {
        if (num%i == 0) {
            cnt++;
            if (i != num/i) cnt++;
        }
    }
    return cnt;
}

int solution(int number, int limit, int power) {
    int answer = 0;
    for(int i=1; i<=number; i++) {
        int now = measure(i);
        if (now > limit) answer += power;
        else answer += now;
    }
    return answer;
}