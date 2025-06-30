#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int num) {
    typedef long long ll;
    ll n = num;
    int answer = 0;
    if (n == 0) return 0;
    while(n!=1) {
        answer++;
        
        if (answer >= 500) {
            answer = -1;
            break;
        };
        if (n%2 == 0) {
            n /= 2;
        } else {
            n *= 3;
            n += 1;
        }
        
    }
    return answer;
}