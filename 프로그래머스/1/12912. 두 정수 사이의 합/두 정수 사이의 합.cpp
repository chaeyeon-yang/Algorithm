#include <string>
#include <vector>
#include <cmath>
#include <iostream>

using namespace std;

long long solution(int a, int b) {
    long long answer = 0;
    int sm = min(a, b);
    int lg = max(a, b);

    for(int i=sm; i<=lg; i++) {
        answer += i;
    }
    return answer;
}